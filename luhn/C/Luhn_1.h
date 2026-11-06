#ifndef _Luhn_1_h
#define _Luhn_1_h

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

extern void Luhn_1__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Luhn_1__acs_empile_num(int32_t par_in_0_1);
extern void Luhn_1__acs_lit_rang_pile_num(int32_t par_in_0_1, int32_t *par_out_0_1);
extern void Luhn_1__acs_read_sum_next(int32_t *par_out_0_1);
extern void Luhn_1__acs_read_sum_now(int32_t *par_out_0_1);
extern void Luhn_1__acs_taille_num(int32_t *par_out_0_1);
extern void Luhn_1__acs_vide_pile_num(void);
extern void Luhn_1__acs_write_sum_next(int32_t par_in_0_1);
extern void Luhn_1__acs_write_sum_now(int32_t par_in_0_1);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Luhn_1_h */
