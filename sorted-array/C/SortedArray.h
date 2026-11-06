#ifndef _SortedArray_h
#define _SortedArray_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_SortedArray.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void SortedArray__INITIALISATION(void);

/* Clause OPERATIONS */

extern void SortedArray__is_sorted(int32_t *array, bool *res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _SortedArray_h */
