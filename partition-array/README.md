# Partitioning an array

Rearrange an array of 8 integers so that the cells below a value come first (Lomuto's partition).

## Problem

The component holds an array of 8 integers, at positions 0 to 7. The array is a concrete variable of the
machine. Initially, every position holds 0.

What this exercise adds is two cursors with an exchange: the permutation property of the sorts comes back,
in a loop of a different shape. This is the loop that a quicksort calls.

## Operations

- `set_cell(pos, value)`: position `pos` receives `value`.
- `low <-- partition(value)`: the cells are rearranged so that those below `value` come first, and the
  operation returns how many there are.

## Properties

`before` is the array just before `partition`, `after` the array just after it, `low` the result, between 0
and 8.

- For every position `i` before `low`, `after(i) < value`.
- For every position `i` from `low` to 7, `after(i) >= value`.
- The result is a permutation: there is a bijection `p` from `0..7` onto `0..7` such that, for every
  position `i`, `after(i) = before(p(i))`.

## Examples

Each example fills the array by `set_cell`, then calls `partition`. The order of the cells inside each part
is not specified: an example states the result only.

| Array before | Value | Result |
|---|---|---|
| 5 3 8 1 9 2 7 4 | 5 | 4 |
| 1 2 3 4 5 6 7 8 | 0 | 0 (nothing below) |
| 1 2 3 4 5 6 7 8 | 9 | 8 (everything below) |

## Algorithm

One loop with two positions: one reads every cell in turn, the other is the end of the cells already known
to be below the value. A cell below the value is exchanged with the cell at that end.

## Reading the model

Start with `B/PartitionArray.mch`, which states the problem. The implementation is in `B/`, the generated
code in `C/`.
