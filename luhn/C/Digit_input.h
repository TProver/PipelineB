#ifndef _Digit_input_h
#define _Digit_input_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_Luhn.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Digit_input__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Digit_input__start_input(void);
extern void Digit_input__read_char(int32_t ch);
extern void Digit_input__input_ok(bool *ok);
extern void Digit_input__input_length(int32_t *nn);
extern void Digit_input__input_digit(int32_t pp, int32_t *dd);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Digit_input_h */
