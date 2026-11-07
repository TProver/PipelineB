# Fast exponentiation

Compute an integer power by binary exponentiation, the base from 1 to 10 and the exponent from 0 to 6.

## Problem

The component has no state. It receives an integer `aa` from 1 to 10 and an integer `nn` from 0 to 6, and
returns `aa` to the power `nn`. Nothing changes. The bounds keep every value of the loop within 32 bits.

What this exercise adds to [`isqrt-int`](../isqrt-int) is an invariant that relates a power to the state of
the loop, and a variant that is halved at each turn.

## Operation

- `res <-- power(aa, nn)`: returns `aa` to the power `nn`.

## Properties

- `res` is `aa` multiplied by itself `nn` times, and `res = 1` if `nn = 0`.

## Examples

| `aa` | `nn` | Result |
|---|---|---|
| 2 | 5 | 32 |
| 3 | 4 | 81 |
| 7 | 0 | 1 (exponent 0) |
| 1 | 6 | 1 |
| 10 | 6 | 1000000 (the greatest result) |

## Algorithm

Keep a result, a base and an exponent. As long as the exponent is not 0: if it is odd, the result is
multiplied by the base; the base is squared; the exponent is halved, rounded down. The invariant says that
`result * base ** exponent` keeps its value.

## Proof

Atelier B closes 38 of the 42 proof obligations. The 4 others are obligations on two added proof rules,
closed in Lean with BARReL.

## Reading the model

Start with `B/Power.mch`, which states the problem. The implementation is in `B/`, the generated code in
`C/`.
