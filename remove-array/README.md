# Removing a value from an array

Move the cells that differ from a value to the start of an array of 8 integers, keeping their order.

## Problem

The component holds an array of 8 integers, at positions 0 to 7. The array is a concrete variable of the
machine. Initially, every position holds 0.

The exercise follows `remove` of ACSL by Example. What it adds is a second cursor: one position reads,
another writes.

## Operations

- `set_cell(pos, val)`: position `pos` receives `val`.
- `kept <-- remove(value)`: the cells that differ from `value` are moved to the start of the array, keeping
  their order, and the operation returns how many there are. The cells after them keep what they held.

## Properties

`before` is the array just before `remove`, `after` the array just after it, `kept` the result, between 0
and 8.

- No kept cell holds the value: for every position `i` before `kept`, `after(i) /= value`.
- The kept cells are those of `before`, in order: there is a strictly increasing function `p` from the
  positions before `kept` to `0..7` such that `after(i) = before(p(i))` for every position `i` before
  `kept`, and every position of `before` that does not hold the value is an image of `p`.
- The rest does not change: for every position `i` from `kept` to 7, `after(i) = before(i)`.

## Examples

Each example fills the array by `set_cell`, then calls `remove`.

| Array before | Value | Result | Array after |
|---|---|---|---|
| 3 1 3 2 3 4 3 5 | 3 | 4 | 1 2 4 5 3 4 3 5 |
| 1 2 3 4 5 6 7 8 | 9 | 8 | 1 2 3 4 5 6 7 8 (value absent) |
| 7 7 7 7 7 7 7 7 | 7 | 0 | 7 7 7 7 7 7 7 7 (nothing kept) |

## Algorithm

One loop with two positions: one reads every cell in turn, the other is where the next kept cell is
written. The write position is never ahead of the read one.

## Reading the model

Start with `B/RemoveArray.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
