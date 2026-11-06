#ifndef _ReverseArray_h
#define _ReverseArray_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_ReverseArray.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t ReverseArray__array[Ctx_ReverseArray__max_IDX+1];
extern void ReverseArray__INITIALISATION(void);

/* Clause OPERATIONS */

extern void ReverseArray__reverse(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _ReverseArray_h */
