/* Context of Power: the integers the component works on.
   The greatest base and the greatest exponent are named bounds, and each input set is an interval
   from 0 with X <: NAT written out, as BART and C4B require. The base starts at 1 in the
   specification: that lower bound is in the precondition of the operation. max_RES is the greatest
   result, 10 to the power 6. */
MACHINE
    Ctx_Power

CONCRETE_CONSTANTS
    max_BASE,
    BASE,
    max_EXPO,
    EXPO,
    max_RES

PROPERTIES
    max_BASE : NAT &
    max_BASE = 10 &
    BASE = 0..max_BASE &
    BASE <: NAT &

    max_EXPO : NAT &
    max_EXPO = 6 &
    EXPO = 0..max_EXPO &
    EXPO <: NAT &

    max_RES : NAT &
    max_RES = 1000000

END
