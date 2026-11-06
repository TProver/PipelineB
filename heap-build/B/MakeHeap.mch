/* An array of 8 integers, at positions 0 to 7, held in a concrete variable and read as a binary
   tree: the parent of position ii, for ii from 1 to 7, is position (ii - 1) / 2 (the division of
   B truncates, and ii - 1 is not negative).
   Every position holds 0 at first; set_cell writes one position, make_heap rearranges the values
   so that every cell is at most its parent. The array is typed and initialised by 0..max_IDX:
   C4B wants a named bound from 0.

   make_heap states its result only: rr has every cell at most its parent, and is array composed
   with a bijection of the positions. Several such rr can exist for one array, so the operation is
   non-deterministic, as the specification says; the code picks one of them. The two loops (the
   positions that have a child, from the last back to the first, and the cell sinking towards its
   greater child) come with the refinement. rr ranges over ran(array), which follows from the
   bijection and keeps the search of ProB small. */
MACHINE
    MakeHeap

SEES
    Ctx_MakeHeap

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

    /* The values of the array are rearranged so that every cell is at most its parent. */
    make_heap =
    ANY rr WHERE
        rr : (0..max_IDX) --> ran(array) &
        !ii.(ii : 1..max_IDX => rr(ii) <= rr((ii - 1) / 2)) &
        #bij.(bij : (0..max_IDX) >->> (0..max_IDX) & rr = (bij ; array))
    THEN
        array := rr
    END

END
