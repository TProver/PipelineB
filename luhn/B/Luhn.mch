/* Luhn check of a number (PipelineB demonstration, specification sections 1.1 to 1.3).
   The component keeps the number being entered, num, a sequence of decimal digits read left
   to right as it is written; its last element is the check digit.

   Luhn rule (1.2), written without a loop: the digit at index ii (1 = leftmost) has position
   size(num) - ii + 1 counted from the right; it is doubled when that position is even, that is
   when (size(num) - ii) mod 2 = 1. The value of a digit dd is then
     dd + ((size(num) - ii) mod 2) * (dd - 9 * (dd / 5))
   which is dd when not doubled, and 2 * dd minus 9 if 2 * dd exceeds 9 when doubled.
   The number is valid when it has at least 2 digits and the sum of these values is a
   multiple of 10, written #qq.(qq : NAT & sum = 10 * qq). */
MACHINE
    Luhn

SEES
    Ctx_Luhn

VARIABLES
    num

INVARIANT
    num : seq(DIGIT) &
    size(num) <= max_IDX + 1

INITIALISATION
    num := []

OPERATIONS

    /* Clear: the current number becomes empty. */
    clear_number =
    BEGIN
        num := []
    END;

    /* Add a digit to the right of the current number; refused when it already has
       max_IDX + 1 = 19 digits. */
    add_digit(dd) =
    PRE
        dd : DIGIT &
        size(num) <= max_IDX
    THEN
        num := num <- dd
    END;

    /* Verify: TRUE when the current number is valid by the Luhn rule, FALSE otherwise.
       A number of fewer than 2 digits is invalid. The number is not modified. */
    rr <-- verify =
    BEGIN
        rr := bool(
            size(num) >= 2 &
            #qq.(qq : NAT &
                 SIGMA(ii).(ii : 1..size(num) |
                     num(ii) + ((size(num) - ii) mod 2) * (num(ii) - 9 * (num(ii) / 5)))
                 = 10 * qq))
    END;

    /* Compute the check digit: the current number is taken without its check digit
       (1 to 18 digits); the result is the digit which, appended to the right, makes the
       number valid. The number is not modified. */
    cc <-- control_digit =
    PRE
        size(num) >= 1 &
        size(num) <= max_IDX
    THEN
        ANY ch WHERE
            ch : DIGIT &
            #qq.(qq : NAT &
                 SIGMA(ii).(ii : 1..size(num <- ch) |
                     (num <- ch)(ii) +
                     ((size(num <- ch) - ii) mod 2) * ((num <- ch)(ii) - 9 * ((num <- ch)(ii) / 5)))
                 = 10 * qq)
        THEN
            cc := ch
        END
    END;

    /* Read: the length of the current number. */
    ll <-- number_length =
    BEGIN
        ll := size(num)
    END;

    /* Read: the digit at index pp of the current number, 1 being the leftmost digit. */
    dd <-- digit_at(pp) =
    PRE
        pp : NAT &
        pp : 1..size(num)
    THEN
        dd := num(pp)
    END

END
