# Testing that an array is sorted

Tell whether an array of 8 integers is in ascending order.

## Problem

The component has no state. It receives an array of 8 integers, at positions 0 to 7, and returns `TRUE` if
the values are in ascending order, equal neighbours allowed, and `FALSE` otherwise. The array is an input
parameter: nothing changes.

The exercise follows `is_sorted` of ACSL by Example.

## Operation

- `res <-- is_sorted(array)`: returns `TRUE` if `array` is sorted.

## Properties

- `res = TRUE` if and only if, for every position `i` from 0 to 6, `array(i) <= array(i + 1)`.

## Examples

| Array | Result |
|---|---|
| 1 2 3 4 5 6 7 8 | `TRUE` |
| 1 2 2 2 5 5 7 8 | `TRUE` (equal neighbours) |
| 2 1 3 4 5 6 7 8 | `FALSE` (first pair) |
| 1 2 3 4 5 6 8 7 | `FALSE` (last pair) |

## Algorithm

One loop over the neighbouring positions.

## Reading the model

Start with `B/SortedArray.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
