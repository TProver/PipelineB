/* An array of 8 integers, at positions 0 to 7, held in a concrete variable.
   Position ii holds ii at first; reverse sends the value of each position ii to position
   max_IDX - ii. The machine states the result only: the exchanges from both ends towards the
   middle come with the refinement.
   The array is typed and initialised by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    ReverseArray

SEES
    Ctx_ReverseArray

CONCRETE_VARIABLES
    array

INVARIANT
    array : (0..max_IDX) --> INT

INITIALISATION
    array := %ii.(ii : 0..max_IDX | ii)

OPERATIONS
    reverse =
    BEGIN
        array := %ii.(ii : 0..max_IDX | array(max_IDX - ii))
    END

END
