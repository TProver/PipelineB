# The Dutch national flag

Sort an array of 8 cells that hold three colours, in a single pass (Dijkstra, 1976).

## Problem

The component holds an array of 8 colours, at positions 0 to 7. A colour is 0, 1 or 2. The array is a
concrete variable of the machine. Initially, every position holds 0.

What this exercise adds is a third cursor: the array is split in three parts, and the loop moves two of the
limits towards each other.

## Operations

- `set_cell(pos, colour)`: position `pos` receives `colour`.
- `first1, first2 <-- arrange`: the cells are rearranged so that those of colour 0 come first, then those of
  colour 1, then those of colour 2. The operation returns `first1`, where colour 1 starts, and `first2`,
  where colour 2 starts.

## Properties

`before` is the array just before `arrange`, `after` the array just after it, and
`0 <= first1 <= first2 <= 8`.

- For every position `i` before `first1`, `after(i) = 0`.
- For every position `i` from `first1` to before `first2`, `after(i) = 1`.
- For every position `i` from `first2` to 7, `after(i) = 2`.
- The result is a permutation: there is a bijection `p` from `0..7` onto `0..7` such that, for every
  position `i`, `after(i) = before(p(i))`.

## Examples

Each example fills the array by `set_cell`, then calls `arrange`.

| Array before | `first1` | `first2` | Array after |
|---|---|---|---|
| 2 0 1 2 1 0 0 2 | 3 | 5 | 0 0 0 1 1 2 2 2 |
| 0 0 0 0 0 0 0 0 | 8 | 8 | 0 0 0 0 0 0 0 0 (one colour) |
| 2 2 2 2 1 1 0 0 | 2 | 4 | 0 0 1 1 2 2 2 2 |

## Algorithm

One loop with three positions: the end of colour 0, the cell being read, and the start of colour 2. Each
turn looks at one cell and exchanges it if it is not in the right part.

## Reading the model

Start with `B/DutchFlag.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
