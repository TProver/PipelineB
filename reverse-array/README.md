# Reversing an array in place

Reverse an array of 8 integers without a second array.

## Problem

The component holds an array of 8 integers, at positions 0 to 7. The array is a concrete variable of the
machine. Initially, position `i` holds `i`.

The exercise follows `reverse` of ACSL by Example. What it adds is the exchange in place: the loop swaps
cells of the array it reads.

## Operation

- `reverse`: the value of position `i` goes to position `7 - i`. The operation returns nothing.

## Properties

`before` is the array just before `reverse`, `after` the array just after it.

- For every position `i`, `after(i) = before(7 - i)`.
- Two calls of `reverse` give back the array.

## Examples

| Calls | Array after |
|---|---|
| none | 0 1 2 3 4 5 6 7 |
| `reverse` | 7 6 5 4 3 2 1 0 |
| `reverse`, twice | 0 1 2 3 4 5 6 7 |

## Algorithm

One loop of exchanges: it swaps the two ends and moves towards the middle.

## Reading the model

Start with `B/ReverseArray.mch`, which states the problem. The implementation is in `B/`, the generated
code in `C/`.
