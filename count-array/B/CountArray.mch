/* Counting a value in an array: a component without state, with a single operation that
   changes nothing. The array is typed by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    CountArray

SEES
    Ctx_CountArray

OPERATIONS

    /* The number of positions of the array that hold the value. */
    nb <-- count(array, value) =
    PRE
        array : (0..max_IDX) --> INT &
        value : INT
    THEN
        nb := card({ii | ii : 0..max_IDX & array(ii) = value})
    END

END
