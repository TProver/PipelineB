/* Integer square root: a component without state, with a single operation that changes nothing.
   The binary search belongs to the refinement: the machine states the result, not the way to
   compute it. */
MACHINE
    Isqrt

SEES
    Ctx_Isqrt

OPERATIONS

    /* The greatest integer whose square is at most nn. The interval 0..max_ROOT holds all of them
       for any input, and 0 is always one of them. */
    res <-- isqrt(nn) =
    PRE
        nn : VAL
    THEN
        res := max({rr | rr : 0..max_ROOT & rr * rr <= nn})
    END

END
