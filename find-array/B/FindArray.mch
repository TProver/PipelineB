/* Finding a value in an array: a component without state, with a single operation that changes
   nothing. The array is typed by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    FindArray

SEES
    Ctx_FindArray

OPERATIONS

    /* The first position holding value; max_IDX + 1, the number of positions, if there is none. */
    pos <-- find(array, value) =
    PRE
        array : (0..max_IDX) --> INT &
        value : INT
    THEN
        pos := min({ii | ii : 0..max_IDX & array(ii) = value} \/ {max_IDX + 1})
    END

END
