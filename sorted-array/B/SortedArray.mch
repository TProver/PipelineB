/* Testing that an array is sorted: a component without state, with a single operation that
   changes nothing. The positions 0..max_IDX come from the context Ctx_SortedArray. */
MACHINE
    SortedArray

SEES
    Ctx_SortedArray

OPERATIONS

    /* TRUE if the values of the array are in ascending order, equal neighbours allowed. */
    res <-- is_sorted(array) =
    PRE
        array : (0..max_IDX) --> INT
    THEN
        res := bool(!ii.(ii : 0..max_IDX - 1 => array(ii) <= array(ii + 1)))
    END

END
