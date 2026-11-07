# Counting a value in an array

Count how many positions of an array of 8 integers hold a given value.

## Problem

The component has no state. It receives an array of 8 integers, at positions 0 to 7, and a value, and
returns the number of positions that hold this value. Both are input parameters: nothing changes.

The exercise follows `count` of ACSL by Example.

## Operation

- `nb <-- count(array, value)`: returns the number of positions that hold `value`.

## Properties

- `nb` is the cardinal of the set of positions `i` such that `array(i) = value`.
- `0 <= nb <= 8`.

## Examples

| Array | Value | Result |
|---|---|---|
| 1 2 3 2 2 4 5 2 | 2 | 4 |
| 1 2 3 4 5 6 7 8 | 9 | 0 (absent) |
| 7 7 7 7 7 7 7 7 | 7 | 8 (everywhere) |

## Algorithm

One loop over the positions.

## Reading the model

Start with `B/CountArray.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
