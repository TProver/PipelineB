# Maximum of an array

Find the greatest value of an array of 11 integers.

## Problem

The component has no state. It receives an array of integers at positions 0 to `NN`, where `NN` is the
constant of the context `ctx`, equal to 10, and returns its greatest value. The array is an input
parameter: nothing changes.

The exercise comes from the [B Workbook](https://github.com/CLEARSY/BWORKBOOK) (`finding_the_max_array`).
`ctx` comes from it too.

## Operation

- `maxi <-- getMaximum(array)`: returns the greatest value of `array`.

## Properties

- `maxi` is the value of at least one position.
- For every position `i`, `array(i) <= maxi`.

## Examples

| Array, positions 0 to 10 | Result |
|---|---|
| 3 1 4 1 5 9 2 6 5 3 5 | 9 |
| 7 7 7 7 7 7 7 7 7 7 7 | 7 (all equal) |
| 9 0 0 0 0 0 0 0 0 0 0 | 9 (first position) |
| 0 0 0 0 0 0 0 0 0 0 9 | 9 (last position) |

## Algorithm

Start from the value of position 0, then one loop over positions 1 to `NN`, a plain counter, keeps the
greatest value seen so far.

## Reading the model

Start with `B/max_array.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
