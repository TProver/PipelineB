/* Fast exponentiation: a component without state, with a single operation that changes nothing.
   The binary exponentiation loop belongs to the refinement: the machine states the result, not
   the way to compute it. */
MACHINE
    Power

SEES
    Ctx_Power

OPERATIONS

    /* aa to the power nn, for a base from 1 to max_BASE and an exponent from 0 to max_EXPO. */
    res <-- power(aa, nn) =
    PRE
        aa : BASE &
        nn : EXPO &
        1 <= aa
    THEN
        res := aa ** nn
    END

END
