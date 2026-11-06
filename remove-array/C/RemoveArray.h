#ifndef _RemoveArray_h
#define _RemoveArray_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_RemoveArray.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t RemoveArray__array[Ctx_RemoveArray__max_IDX+1];
extern void RemoveArray__INITIALISATION(void);

/* Clause OPERATIONS */

extern void RemoveArray__set_cell(int32_t pos, int32_t val);
extern void RemoveArray__remove(int32_t value, int32_t *kept);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _RemoveArray_h */
