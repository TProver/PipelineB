/* Digit_input: basic machine (specification 1.4), never refined; its C body is written by
   hand at a later step. It turns a character string into the digits of a number, reading
   the string one character at a time (byte codes):
   - a digit '0'..'9' is appended to the digits read so far;
   - a space or a dash is ignored;
   - any other character, or a 20th digit, makes the input incorrect; once incorrect, the
     input stays incorrect and its digits stay unchanged until start_input.
   The application then gives the digits to the Luhn component by add_digit. */
MACHINE
    Digit_input

SEES
    Ctx_Luhn

VARIABLES
    input_digits, input_error

INVARIANT
    input_digits : seq(DIGIT) &
    size(input_digits) <= max_IDX + 1 &
    input_error : BOOL

INITIALISATION
    input_digits := [] ||
    input_error := FALSE

OPERATIONS

    /* Start reading a new string: no digit, no error. */
    start_input =
    BEGIN
        input_digits := [] ||
        input_error := FALSE
    END;

    /* Read the next character of the string, given by its byte code ch. */
    read_char(ch) =
    PRE
        ch : CHARCODE
    THEN
        IF input_error = FALSE THEN
            IF ch : CODE_ZERO..CODE_ZERO + max_DIGIT THEN
                IF size(input_digits) <= max_IDX THEN
                    input_digits := input_digits <- (ch - CODE_ZERO)
                ELSE
                    input_error := TRUE
                END
            ELSIF ch = CODE_SPACE or ch = CODE_DASH THEN
                skip
            ELSE
                input_error := TRUE
            END
        END
    END;

    /* TRUE when every character read so far was a digit, a space or a dash, and there were
       at most max_IDX + 1 = 19 digits. */
    ok <-- input_ok =
    BEGIN
        ok := bool(input_error = FALSE)
    END;

    /* Number of digits read so far. */
    nn <-- input_length =
    BEGIN
        nn := size(input_digits)
    END;

    /* The digit at index pp of the digits read, 1 being the leftmost. */
    dd <-- input_digit(pp) =
    PRE
        pp : NAT &
        pp : 1..size(input_digits)
    THEN
        dd := input_digits(pp)
    END

END
