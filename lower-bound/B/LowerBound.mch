/* Lower bound in a sorted array: a component without state, with a single operation that changes
   nothing. The array is typed by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    LowerBound

SEES
    Ctx_LowerBound

OPERATIONS

    /* The first position whose cell is at least value; max_IDX + 1, the number of positions, if
       every cell is below value. Only callable on an array in ascending order, equal cells
       allowed. The order is stated on every pair of positions, not on neighbours: same meaning,
       and the proof of the binary search can use it without an induction. */
    pos <-- lower_bound(array, value) =
    PRE
        array : (0..max_IDX) --> INT &
        value : INT &
        !(ii, jj).(ii : 0..max_IDX & jj : 0..max_IDX & ii <= jj => array(ii) <= array(jj))
    THEN
        pos := min({kk | kk : 0..max_IDX & value <= array(kk)} \/ {max_IDX + 1})
    END

END
