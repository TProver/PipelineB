/* An array of 8 integers, at positions 0 to 7, held in a concrete variable.
   Every position holds 0 at first; set_cell writes one position, sort rearranges the values in
   ascending order. The array is typed and initialised by 0..max_IDX: C4B wants a named bound
   from 0.

   sort states its result only: rr is in ascending order, and is array composed with a bijection
   of the positions. Exactly one such rr exists, so the operation is deterministic. The heap
   comes with the refinement: building it (every cell at most its parent, the parent of position
   ii being position (ii - 1) / 2), then repeatedly exchanging the first cell with the last cell
   of the heap, shortening the heap by one position and letting the new first cell sink. rr ranges
   over ran(array), which follows from the bijection and keeps the search of ProB small. */
MACHINE
    HeapSort

SEES
    Ctx_HeapSort

CONCRETE_VARIABLES
    array

INVARIANT
    array : (0..max_IDX) --> INT

INITIALISATION
    array := (0..max_IDX) * {0}

OPERATIONS

    /* The position receives the value. */
    set_cell(pos, value) =
    PRE
        pos : IDX &
        value : INT
    THEN
        array(pos) := value
    END;

    /* The values of the array are rearranged in ascending order. */
    sort =
    ANY rr WHERE
        rr : (0..max_IDX) --> ran(array) &
        !ii.(ii : 0..max_IDX - 1 => rr(ii) <= rr(ii + 1)) &
        #bij.(bij : (0..max_IDX) >->> (0..max_IDX) & rr = (bij ; array))
    THEN
        array := rr
    END

END
