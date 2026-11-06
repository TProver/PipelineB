/* C body of the basic machine Digit_input (PipelineB, Luhn demonstration, 2026-11-02).
   Specification: modele/Digit_input.mch. Header: c/generated/Digit_input.h, written by C4B.

   Representation:
   - input_digits, a sequence of at most max_IDX + 1 = 19 digits, is the array prefix
     digits[0 .. length - 1]; the B index pp (1 = leftmost) is digits[pp - 1];
   - input_error is the boolean error.

   Preconditions (ch : CHARCODE, pp : 1..size(input_digits)) are the caller's obligations,
   proved on the B side; they are not re-checked here. Verified by test_Digit_input.c. */
#include "Digit_input.h"

#define CAPACITY (Ctx_Luhn__max_IDX + 1)

static int32_t digits[CAPACITY];
static int32_t length;
static bool error;

void Digit_input__INITIALISATION(void)
{
    length = 0;
    error = false;
}

void Digit_input__start_input(void)
{
    length = 0;
    error = false;
}

void Digit_input__read_char(int32_t ch)
{
    if (!error) {
        if (Ctx_Luhn__CODE_ZERO <= ch && ch <= Ctx_Luhn__CODE_ZERO + Ctx_Luhn__max_DIGIT) {
            if (length <= Ctx_Luhn__max_IDX) {
                digits[length] = ch - Ctx_Luhn__CODE_ZERO;
                length = length + 1;
            } else {
                error = true;
            }
        } else if (ch == Ctx_Luhn__CODE_SPACE || ch == Ctx_Luhn__CODE_DASH) {
            /* skip */
        } else {
            error = true;
        }
    }
}

void Digit_input__input_ok(bool *ok)
{
    *ok = !error;
}

void Digit_input__input_length(int32_t *nn)
{
    *nn = length;
}

void Digit_input__input_digit(int32_t pp, int32_t *dd)
{
    *dd = digits[pp - 1];
}
