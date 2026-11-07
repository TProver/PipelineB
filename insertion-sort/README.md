# Sorting an array by insertion

Sort an array of 8 integers in ascending order, by insertion.

## Problem

The component holds an array of 8 integers, at positions 0 to 7. The array is a concrete variable of the
machine. Initially, every position holds 0.

The exercise follows `insertion_sort` of ACSL by Example. What it adds to the selection sort is an inner
loop that writes the array instead of only reading it.

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
| 1 2 3 4 5 6 7 8 | 1 2 3 4 5 6 7 8 (already sorted) |
| 4 2 4 1 2 9 9 0 | 0 1 2 2 4 4 9 9 (duplicates) |

## Algorithm

For each position in turn, the cell moves back, exchanged with its left neighbour, until the neighbour is
not greater. What lies before the position is thus always sorted. The two loops are nested in one component.

## Reading the model

Start with `B/InsertionSort.mch`, which states the problem. The implementation is in `B/`, the generated
code in `C/`.
