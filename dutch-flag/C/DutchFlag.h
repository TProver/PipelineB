#ifndef _DutchFlag_h
#define _DutchFlag_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_DutchFlag.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern int32_t DutchFlag__array[Ctx_DutchFlag__max_IDX+1];
extern void DutchFlag__INITIALISATION(void);

/* Clause OPERATIONS */

extern void DutchFlag__set_cell(int32_t pos, int32_t colour);
extern void DutchFlag__arrange(int32_t *first1, int32_t *first2);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _DutchFlag_h */
