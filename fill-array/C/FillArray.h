#ifndef _FillArray_h
#define _FillArray_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_FillArray.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t FillArray__array[Ctx_FillArray__max_IDX+1];
extern void FillArray__INITIALISATION(void);

/* Clause OPERATIONS */

extern void FillArray__set_array_value(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _FillArray_h */
