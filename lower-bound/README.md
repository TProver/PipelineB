# Lower bound in a sorted array

Find, by binary search, the first cell of a sorted array that is at least a given value.

## Problem

The component has no state. It receives an array of 8 integers, at positions 0 to 7, sorted in ascending
order, and a value. It returns the first position whose cell is at least the value, or 8 if every cell is
below the value. Both are input parameters: nothing changes. The operation may only be called on a sorted
array.

The exercise follows `lower_bound` of ACSL by Example. What it adds is a bound that narrows: each turn of
the loop halves the part of the array still to look at.

## Operation

- `pos <-- lower_bound(array, value)`: returns a position between 0 and 8.

## Properties

- For every position `i` before `pos`, `array(i) < value`.
- For every position `i` from `pos` to 7, `array(i) >= value`.

## Examples

| Array | Value | Result |
|---|---|---|
| 1 3 3 5 7 9 9 11 | 5 | 3 (present once) |
| 1 3 3 5 7 9 9 11 | 3 | 1 (first of two) |
| 1 3 3 5 7 9 9 11 | 4 | 3 (absent, between two cells) |
| 1 3 3 5 7 9 9 11 | 0 | 0 (below every cell) |
| 1 3 3 5 7 9 9 11 | 12 | 8 (above every cell) |

## Algorithm

Binary search: keep two bounds, look at the position halfway between them, and move one of the bounds
there. The variant of the loop is not a simple counter.

## Reading the model

Start with `B/LowerBound.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
