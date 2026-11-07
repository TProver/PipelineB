# Checking a number with the Luhn algorithm

Decide whether a card number is valid by the Luhn rule, and compute the check digit of an incomplete number.

## Problem

A number is a sequence of decimal digits, read from left to right as it is written. The last digit, the
rightmost one, is the check digit. The component keeps the number being entered, which may be empty, and
which has at most 19 digits, the greatest length of a card number.

To decide whether a number is valid:

1. go through its digits from right to left, numbering the positions from 1 for the rightmost digit;
2. a digit at an odd position counts as it is;
3. a digit at an even position is doubled, and 9 is taken off if the double is above 9;
4. add all these values;
5. the number is valid if and only if this sum is a multiple of 10.

## Operations

- `clear_number`: the current number becomes empty.
- `add_digit(dd)`: the digit `dd`, from 0 to 9, is added on the right. Refused if the number already has 19
  digits.
- `rr <-- verify`: returns whether the current number is valid. A number of fewer than 2 digits is invalid.
  The number does not change.
- `cc <-- control_digit`: the current number, of 1 to 18 digits, is taken as a number without its check
  digit; returns the digit that makes it valid. The number does not change.
- `ll <-- number_length`: returns the length of the current number.
- `dd <-- digit_at(pp)`: returns the digit at index `pp`, counted from the left.

## Basic machine

An application reads a number as a string, with spaces or dashes between groups (`4111 1111 1111 1111`). The
step from the string to the digits belongs to the basic machine `Digit_input`, whose C is in `C/base/`. It
reads the string one character at a time, ignores spaces and dashes, and refuses any string that holds
another character or more than 19 digits. The B model stays on digits.

## Properties

- The computed check digit, added on the right, gives a valid number.
- It is unique: only one digit from 0 to 9 does so.
- A change of a single digit is always detected: a valid number with one digit changed is invalid.
- An exchange of two different neighbouring digits is detected, except 0 and 9, whose exchange never is.
- Leading zeros do not change the validity of a number of at least 2 digits.
- `verify` and `control_digit` leave the current number unchanged.
- The current number never has more than 19 digits, and each of its digits is between 0 and 9.

## Examples

| Digits entered | Operation | Result |
|---|---|---|
| 7 9 9 2 7 3 9 8 7 1 3 | `verify` | valid (sum 70) |
| 7 9 9 2 7 3 9 8 7 1 0 | `verify` | invalid (wrong check digit) |
| 7 9 9 2 7 3 9 8 7 1 | `control_digit` | 3 |
| 4 followed by fifteen 1s | `verify` | valid (sum 30) |
| 4, fourteen 1s, then 2 | `verify` | invalid (sum 31) |
| 0 7 9 9 2 7 3 9 8 7 1 3 | `verify` | valid (leading zero) |
| 1 9 0 9, then 1 0 9 9 | `verify` on each | both valid (0 and 9 exchanged) |
| none | `verify` | invalid (fewer than 2 digits) |
| 19 digits, then a 20th | `add_digit` | the 20th is refused |

## Algorithm

There is no loop. The specification states the sum over the positions of the number; the implementation
keeps two running sums instead, updated by `add_digit`:

- `sum_now`, the sum of the number as it stands;
- `sum_next`, the sum the number would have if one more digit followed it, each digit having then moved one
  position.

Adding a digit `dd` turns `sum_next`, plus `dd`, into the new `sum_now`; and the old `sum_now`, plus `dd`
doubled (less 9 if the double is above 9), into the new `sum_next`. `verify` tests `sum_now mod 10 = 0`, and `control_digit` returns
`(10 - sum_next mod 10) mod 10`: neither goes through the digits.

## Reading the model

Start with `B/Luhn.mch`, which states the problem, and `B/Digit_input.mch`, the basic machine. The
implementations are in `B/`, the generated code in `C/`.
