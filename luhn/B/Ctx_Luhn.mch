/* Context of the Luhn demonstration (PipelineB, 2026-11-02).
   - DIGIT = 0..9, the decimal digits;
   - IDX = 0..max_IDX with max_IDX = 18: a number has at most max_IDX + 1 = 19 digits
     (the longest card number, specification 1.3);
   - CHARCODE = 0..255, the byte codes of the characters read by the input machine;
     CODE_ZERO, CODE_SPACE, CODE_DASH are the ASCII codes of '0', ' ' and '-'. */
MACHINE
    Ctx_Luhn

CONCRETE_CONSTANTS
    max_DIGIT, DIGIT,
    max_IDX, IDX,
    max_CHARCODE, CHARCODE,
    CODE_ZERO, CODE_SPACE, CODE_DASH

PROPERTIES
    max_DIGIT : NAT & max_DIGIT = 9 &
    DIGIT = 0..max_DIGIT & DIGIT <: NAT &
    max_IDX : NAT & max_IDX = 18 &
    IDX = 0..max_IDX & IDX <: NAT &
    max_CHARCODE : NAT & max_CHARCODE = 255 &
    CHARCODE = 0..max_CHARCODE & CHARCODE <: NAT &
    CODE_ZERO : NAT & CODE_ZERO = 48 &
    CODE_SPACE : NAT & CODE_SPACE = 32 &
    CODE_DASH : NAT & CODE_DASH = 45

END
