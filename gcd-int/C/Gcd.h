#ifndef _Gcd_h
#define _Gcd_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_Gcd.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Gcd__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Gcd__gcd(int32_t aa, int32_t bb, int32_t *res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Gcd_h */
