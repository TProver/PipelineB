/* An array of 8 colours, at positions 0 to 7, held in a concrete variable. A colour is 0, 1 or 2.
   Every position holds 0 at first; set_cell writes one position; arrange rearranges the cells so
   that the colours come in the order 0, 1, 2, and returns where colours 1 and 2 start.
   The machine states the result of arrange only: the loop with its three positions and its
   exchanges comes with the refinement.
   The array is typed and initialised by 0..max_IDX: C4B wants a named bound from 0. */
MACHINE
    DutchFlag

SEES
    Ctx_DutchFlag

CONCRETE_VARIABLES
    array

INVARIANT
    array : (0..max_IDX) --> COLOUR

INITIALISATION
    array := (0..max_IDX) * {0}

OPERATIONS

    /* The position receives the colour. */
    set_cell(pos, colour) =
    PRE
        pos : IDX &
        colour : COLOUR
    THEN
        array(pos) := colour
    END;

    /* rr is the array rearranged through a bijection of the positions, cell by cell, in three
       parts: colour 0 before nb1, colour 1 from nb1 to before nb2, colour 2 from nb2 on. Since bij
       is a bijection, nb1, nb2 and rr can only take one value each: the operation is
       deterministic, and only the witness bij is free.
       bij is a variable of the ANY, not an existential: ProB then builds rr from bij instead of
       searching rr first. nb1 and nb2 are bounded before the quantifiers that use them, so that
       their positions are in the domain of rr. */
    first1, first2 <-- arrange =
    ANY rr, bij, nb1, nb2 WHERE
        bij : (0..max_IDX) >->> (0..max_IDX) &
        rr : (0..max_IDX) --> COLOUR &
        nb1 : 0..max_IDX + 1 &
        nb2 : nb1..max_IDX + 1 &
        !ii.(ii : 0..max_IDX => rr(ii) = array(bij(ii))) &
        !ii.(ii : 0..nb1 - 1 => rr(ii) = 0) &
        !ii.(ii : nb1..nb2 - 1 => rr(ii) = 1) &
        !ii.(ii : nb2..max_IDX => rr(ii) = 2)
    THEN
        array := rr ||
        first1 := nb1 ||
        first2 := nb2
    END

END
