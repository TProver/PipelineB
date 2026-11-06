/* Context of DutchFlag: the colours and the positions of the array.
   Each set is an interval from 0 with a named bound, and <: NAT is written out, as BART and C4B
   require. */
MACHINE
    Ctx_DutchFlag

CONCRETE_CONSTANTS
    max_COLOUR,
    COLOUR,
    max_IDX,
    IDX

PROPERTIES
    max_COLOUR : NAT &
    max_COLOUR = 2 &
    COLOUR = 0..max_COLOUR &
    COLOUR <: NAT &
    max_IDX : NAT &
    max_IDX = 7 &
    IDX = 0..max_IDX &
    IDX <: NAT

END
