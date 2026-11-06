#ifndef _HeapSort_h
#define _HeapSort_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_HeapSort.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t HeapSort__array[Ctx_HeapSort__max_IDX+1];
extern void HeapSort__INITIALISATION(void);

/* Clause OPERATIONS */

extern void HeapSort__set_cell(int32_t pos, int32_t value);
extern void HeapSort__sort(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _HeapSort_h */
