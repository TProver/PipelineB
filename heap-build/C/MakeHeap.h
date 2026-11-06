#ifndef _MakeHeap_h
#define _MakeHeap_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_MakeHeap.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t MakeHeap__array[Ctx_MakeHeap__max_IDX+1];
extern void MakeHeap__INITIALISATION(void);

/* Clause OPERATIONS */

extern void MakeHeap__set_cell(int32_t pos, int32_t value);
extern void MakeHeap__make_heap(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _MakeHeap_h */
