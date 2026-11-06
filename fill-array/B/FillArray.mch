/* An array of 11 integers, at positions 0 to 10, held in a concrete variable.
   Every position holds 0 at first; set_array_value gives each position its own number.
   The array is typed and initialised by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    FillArray

SEES
    Ctx_FillArray

CONCRETE_VARIABLES
    array

INVARIANT
    array : (0..max_IDX) --> INT

INITIALISATION
    array := (0..max_IDX) * {0}

OPERATIONS
    set_array_value =
    BEGIN
        array := %ii.(ii : 0..max_IDX | ii)
    END

END
