# Greatest common divisor

Compute the greatest common divisor of two integers from 1 to 10000, by Euclid's algorithm.

## Problem

The component has no state. It receives two integers `aa` and `bb`, each from 1 to 10000, and returns their
greatest common divisor. Nothing changes.

What this exercise adds is that there is no array: the invariant and the variant are arithmetic, and the
proof has to deal with the remainder of a division. The algorithm is given by Knuth in *The Art of Computer
Programming*, section 1.1.

## Operation

- `res <-- gcd(aa, bb)`: returns the greatest common divisor of `aa` and `bb`.

## Properties

- It divides both: `aa mod res = 0` and `bb mod res = 0`.
- It is the greatest: every integer `d` from 1 to `aa` that divides both `aa` and `bb` is at most `res`.

## Examples

| `aa` | `bb` | Result |
|---|---|---|
| 12 | 18 | 6 |
| 17 | 5 | 1 (coprime) |
| 7 | 7 | 7 (equal) |
| 100 | 75 | 25 |

## Algorithm

Euclid's loop: as long as the second number is not 0, the pair `(a, b)` becomes `(b, a mod b)`; the result
is then the first number. The invariant says that the common divisors do not change.

## Reading the model

Start with `B/Gcd.mch`, which states the problem. The implementation is in `B/`, the generated code in `C/`.
