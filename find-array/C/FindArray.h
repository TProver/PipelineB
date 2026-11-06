#ifndef _FindArray_h
#define _FindArray_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_FindArray.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void FindArray__INITIALISATION(void);

/* Clause OPERATIONS */

extern void FindArray__find(int32_t *array, int32_t value, int32_t *pos);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _FindArray_h */
