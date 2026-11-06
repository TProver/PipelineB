/* An array of 8 integers, at positions 0 to 7, held in a concrete variable.
   Every position holds 0 at first; set_cell writes one position; remove moves the cells that
   differ from a value to the start of the array, in their order, and returns how many they are.
   The machine states the result of remove only: the loop with its read and write positions comes
   with the refinement.
   The array is typed and initialised by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    RemoveArray

SEES
    Ctx_RemoveArray

CONCRETE_VARIABLES
    array

INVARIANT
    array : (0..max_IDX) --> INT

INITIALISATION
    array := (0..max_IDX) * {0}

OPERATIONS

    /* The position receives the value. */
    set_cell(pos, val) =
    PRE
        pos : IDX &
        val : INT
    THEN
        array(pos) := val
    END;

    /* A cell that differs from value goes to the position given by the number of such cells
       before it; nb is the number of such cells in all; the cells from nb on keep what they held.
       Exactly one rr satisfies this, so the operation is deterministic. rr ranges over ran(array),
       which follows from the rest and keeps the search of ProB small. The couple form of the
       moved cell needs no proof that the position is in the domain of rr. */
    kept <-- remove(value) =
    PRE
        value : INT
    THEN
        ANY rr, nb WHERE
            rr : (0..max_IDX) --> ran(array) &
            nb : NAT &
            nb = card({ii | ii : 0..max_IDX & array(ii) /= value}) &
            !ii.(ii : 0..max_IDX & array(ii) /= value =>
                 (card({jj | jj : 0..ii - 1 & array(jj) /= value}) |-> array(ii)) : rr) &
            !ii.(ii : nb..max_IDX => rr(ii) = array(ii))
        THEN
            array := rr ||
            kept := nb
        END
    END

END
