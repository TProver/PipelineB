/* Context of Isqrt: the integers the component works on.
   The greatest input is a named bound and the inputs are an interval from 0, VAL <: NAT written
   out, as BART and C4B require. max_ROOT is the root of the greatest input: 100 * 100 = 10000, so
   no integer above it has a square within VAL. */
MACHINE
    Ctx_Isqrt

CONCRETE_CONSTANTS
    max_VAL,
    VAL,
    max_ROOT

PROPERTIES
    max_VAL : NAT &
    max_VAL = 10000 &
    VAL = 0..max_VAL &
    VAL <: NAT &

    max_ROOT : NAT &
    max_ROOT = 100

END
