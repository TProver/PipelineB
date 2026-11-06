#ifndef _Isqrt_h
#define _Isqrt_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_Isqrt.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void Isqrt__INITIALISATION(void);

/* Clause OPERATIONS */

extern void Isqrt__isqrt(int32_t nn, int32_t *res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Isqrt_h */
