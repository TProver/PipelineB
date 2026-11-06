/* Greatest common divisor: a component without state, with a single operation that changes
   nothing. Euclid's loop belongs to the refinement: the machine states the result, not the way
   to compute it. */
MACHINE
    Gcd

SEES
    Ctx_Gcd

OPERATIONS

    /* The greatest of the common divisors of aa and bb. A divisor of aa is at most aa, so the
       interval 1..aa holds all of them, and 1 is always one of them. */
    res <-- gcd(aa, bb) =
    PRE
        aa : VAL &
        bb : VAL &
        1 <= aa &
        1 <= bb
    THEN
        res := max({dd | dd : 1..aa & aa mod dd = 0 & bb mod dd = 0})
    END

END
