# Filling an array

Fill an array of 11 integers so that each position holds its own number.

## Problem

The component holds an array of 11 integers, at positions 0 to 10. The array is a concrete variable of the
machine. Initially, every position holds 0.

The exercise comes from the [B Workbook](https://github.com/CLEARSY/BWORKBOOK) (`filling_an_array`).

## Operation

- `set_array_value`: position `i` receives `i`, for every position. The operation returns nothing.

## Properties

- After `set_array_value`, for every position `i`, `array(i) = i`.
- A second `set_array_value` leaves the array unchanged.

## Examples

| Calls | Array after |
|---|---|
| none | 0 0 0 0 0 0 0 0 0 0 0 |
| `set_array_value` | 0 1 2 3 4 5 6 7 8 9 10 |
| `set_array_value`, twice | 0 1 2 3 4 5 6 7 8 9 10 |

## Algorithm

One loop that writes the array, a position at a time.

## Reading the model

Start with `B/FillArray.mch`, which states the problem. The implementation is in `B/`, the generated code
in `C/`.
