/* Context of LowerBound: the positions of the array.
   The last position is a named bound and the positions are an interval from 0,
   IDX <: NAT written out, as BART and C4B require. */
MACHINE
    Ctx_LowerBound

CONCRETE_CONSTANTS
    max_IDX,
    IDX

PROPERTIES
    max_IDX : NAT &
    max_IDX = 7 &
    IDX = 0..max_IDX &
    IDX <: NAT

END
