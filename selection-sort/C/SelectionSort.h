#ifndef _SelectionSort_h
#define _SelectionSort_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_SelectionSort.h"

/* Clause IMPORTS */
#include "SelectionSort_1.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t SelectionSort__array[Ctx_SelectionSort__max_IDX+1];
extern void SelectionSort__INITIALISATION(void);

/* Clause OPERATIONS */

extern void SelectionSort__set_cell(int32_t pos, int32_t value);
extern void SelectionSort__sort(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _SelectionSort_h */
