#ifndef _Power_h
#define _Power_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_Power.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Power__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Power__power(int32_t aa, int32_t nn, int32_t *res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Power_h */
