# Building a heap in an array

Rearrange an array of 8 integers into a binary heap, with the greatest value at the root.

## Problem

The component holds an array of 8 integers, at positions 0 to 7. The array is a concrete variable of the
machine. Initially, every position holds 0. Read as a tree, the parent of position `i`, for `i` from 1 to 7,
is position `(i - 1) / 2`, rounded down.

The exercise follows `make_heap` of ACSL by Example. What it adds is a structure that carries the invariant:
the property relates a cell to its parent, not to its neighbour.

## Operations

- `set_cell(pos, value)`: position `pos` receives `value`.
- `make_heap`: the values of the array are rearranged so that every cell is at most its parent. The
  operation returns nothing.

## Properties

`before` is the array just before `make_heap`, `after` the array just after it.

- The result is a heap: for every position `i` from 1 to 7, `after(i) <= after((i - 1) / 2)`.
- The result is a permutation: there is a bijection `p` from `0..7` onto `0..7` such that, for every
  position `i`, `after(i) = before(p(i))`.

## Examples

Each example fills the array by `set_cell`, then calls `make_heap`. Several heaps can come from one array: an
example states the first cell only, the greatest value.

| Array before | Cell 0 after |
|---|---|
| 5 3 8 1 9 2 7 4 | 9 |
| 8 7 6 5 4 3 2 1 | 8 (already a heap) |
| 1 2 3 4 5 6 7 8 | 8 |

## Algorithm

Go through the positions that have a child, from the last one back to the first. At each of them, the cell
sinks: it is exchanged with its greater child as long as that child is greater.

## Reading the model

Start with `B/MakeHeap.mch`, which states the problem. The implementation is in `B/`, the generated code in
`C/`.
