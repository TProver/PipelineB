#ifndef _Luhn_h
#define _Luhn_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_Luhn.h"

/* Clause IMPORTS */
#include "Luhn_1.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Luhn__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Luhn__clear_number(void);
extern void Luhn__add_digit(int32_t dd);
extern void Luhn__verify(bool *rr);
extern void Luhn__control_digit(int32_t *cc);
extern void Luhn__number_length(int32_t *ll);
extern void Luhn__digit_at(int32_t pp, int32_t *dd);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Luhn_h */
