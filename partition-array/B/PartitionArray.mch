/* An array of 8 integers, at positions 0 to 7, held in a concrete variable.
   Every position holds 0 at first; set_cell writes one position; partition rearranges the cells
   so that those below a value come first, and returns how many they are.
   The machine states the result of partition only: the loop with its two positions and its
   exchange comes with the refinement.
   The array is typed and initialised by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    PartitionArray

SEES
    Ctx_PartitionArray

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

    /* rr is the array rearranged through a bijection of the positions, cell by cell: its first nb
       cells are below value, the others are not. The order inside each part is free, so the
       operation is not deterministic; nb is: since bij is a bijection, it can only be the number
       of cells below value, and no card is needed to say so.
       bij is a variable of the ANY, not an existential: ProB then builds rr from bij instead of
       searching rr first. nb is bounded before the quantifiers that use it, so that their
       positions are in the domain of rr. */
    low <-- partition(value) =
    PRE
        value : INT
    THEN
        ANY rr, bij, nb WHERE
            bij : (0..max_IDX) >->> (0..max_IDX) &
            rr : (0..max_IDX) --> INT &
            nb : 0..max_IDX + 1 &
            !ii.(ii : 0..max_IDX => rr(ii) = array(bij(ii))) &
            !ii.(ii : 0..nb - 1 => rr(ii) < value) &
            !ii.(ii : nb..max_IDX => rr(ii) >= value)
        THEN
            array := rr ||
            low := nb
        END
    END

END
