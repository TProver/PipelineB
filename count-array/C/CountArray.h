#ifndef _CountArray_h
#define _CountArray_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_CountArray.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void CountArray__INITIALISATION(void);

/* Clause OPERATIONS */

extern void CountArray__count(int32_t *array, int32_t value, int32_t *nb);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CountArray_h */
