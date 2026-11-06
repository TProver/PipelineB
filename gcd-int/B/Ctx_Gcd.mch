/* Context of Gcd: the integers the component works on.
   The greatest input is a named bound and the values are an interval from 0, VAL <: NAT written
   out, as BART and C4B require. 0 belongs to VAL although it is not a valid input: the second
   number of Euclid's loop reaches it. */
MACHINE
    Ctx_Gcd

CONCRETE_CONSTANTS
    max_VAL,
    VAL

PROPERTIES
    max_VAL : NAT &
    max_VAL = 10000 &
    VAL = 0..max_VAL &
    VAL <: NAT

END
