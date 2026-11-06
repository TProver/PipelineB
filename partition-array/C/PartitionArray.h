#ifndef _PartitionArray_h
#define _PartitionArray_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_PartitionArray.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t PartitionArray__array[Ctx_PartitionArray__max_IDX+1];
extern void PartitionArray__INITIALISATION(void);

/* Clause OPERATIONS */

extern void PartitionArray__set_cell(int32_t pos, int32_t value);
extern void PartitionArray__partition(int32_t value, int32_t *low);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _PartitionArray_h */
