# Sorting an array with a heap

Sort an array of 8 integers in ascending order, with a heap.

## Problem

The component holds an array of 8 integers, at positions 0 to 7. The array is a concrete variable of the
machine. Initially, every position holds 0.

The exercise follows `heap_sort` of ACSL by Example. What it adds to [`heap-build`](../heap-build) is a heap
that shrinks: the sorted part grows at the end of the array while the heap keeps the start.

## Operations

- `set_cell(pos, value)`: position `pos` receives `value`.
- `sort`: the values of the array are rearranged in ascending order. The operation returns nothing.

## Properties

`before` is the array just before `sort`, `after` the array just after it.

- The result is ordered: for every position `i` from 0 to 6, `after(i) <= after(i + 1)`.
- The result is a permutation: there is a bijection `p` from `0..7` onto `0..7` such that, for every
  position `i`, `after(i) = before(p(i))`.

## Examples

Each example fills the array by `set_cell`, then calls `sort`.

| Array before | Array after |
|---|---|
| 5 3 8 1 9 2 7 4 | 1 2 3 4 5 7 8 9 |
| 8 7 6 5 4 3 2 1 | 1 2 3 4 5 6 7 8 |
| 4 2 4 1 2 9 9 0 | 0 1 2 2 4 4 9 9 (duplicates) |

## Algorithm

First build a heap, as in [`heap-build`](../heap-build): every cell is at most its parent, the parent of
position `i` being position `(i - 1) / 2`. Then repeat: the first cell, the greatest of the heap, is
exchanged with the last cell of the heap; the heap loses this last position; the new first cell sinks.

## Reading the model

Start with `B/HeapSort.mch`, which states the problem. The implementation is in `B/`, the generated code in
`C/`.
