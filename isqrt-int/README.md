# Integer square root

Compute the integer square root of an integer from 0 to 10000, by binary search.

## Problem

The component has no state. It receives an integer `nn` from 0 to 10000 and returns the greatest integer
whose square is at most `nn`. Nothing changes.

What this exercise adds to [`gcd-int`](../gcd-int) is an invariant on a product, and a loop that narrows two
bounds on integers instead of positions of an array.

## Operation

- `res <-- isqrt(nn)`: returns the integer square root of `nn`.

## Properties

- It is not too great: `res * res <= nn`.
- It is the greatest: `nn < (res + 1) * (res + 1)`.

## Examples

| `nn` | Result |
|---|---|
| 0 | 0 |
| 1 | 1 |
| 24 | 4 (just below a square) |
| 25 | 5 (a square) |
| 10000 | 100 (the greatest input) |

## Algorithm

Binary search on the result: keep a lower bound whose square is at most `nn` and an upper bound whose square
is greater than `nn`, and move one of them to the middle until they are neighbours.

## Reading the model

Start with `B/Isqrt.mch`, which states the problem. The implementation is in `B/`, the generated code in
`C/`.
