#ifndef _InsertionSort_h
#define _InsertionSort_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_InsertionSort.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t InsertionSort__array[Ctx_InsertionSort__max_IDX+1];
extern void InsertionSort__INITIALISATION(void);

/* Clause OPERATIONS */

extern void InsertionSort__set_cell(int32_t pos, int32_t value);
extern void InsertionSort__sort(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _InsertionSort_h */
