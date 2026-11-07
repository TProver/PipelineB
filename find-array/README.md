# Finding a value in an array

Return the first position of a value in an array of 8 integers.

## Problem

The component has no state. It receives an array of 8 integers, at positions 0 to 7, and a value. It returns
the first position that holds this value, or 8 if no position holds it. Both are input parameters: nothing
changes.

The exercise follows `find` of ACSL by Example. What it adds to a plain loop is the early exit: the loop
stops at the first match.

## Operation

- `pos <-- find(array, value)`: returns the first position that holds `value`, or 8.

## Properties

- If `pos <= 7`, then `array(pos) = value`.
- For every position `i` before `pos`, `array(i) /= value`. With `pos = 8`, this says that the value is
  nowhere.

## Examples

| Array | Value | Result |
|---|---|---|
| 4 2 7 2 9 1 3 5 | 2 | 1 (first of two) |
| 4 2 7 2 9 1 3 5 | 6 | 8 (absent) |
| 4 2 7 2 9 1 3 5 | 4 | 0 (first position) |
| 4 2 7 2 9 1 3 5 | 5 | 7 (last position) |

## Algorithm

One loop with an early exit.

## Reading the model

Start with `B/FindArray.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
