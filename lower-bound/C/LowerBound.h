#ifndef _LowerBound_h
#define _LowerBound_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "Ctx_LowerBound.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */

/* Clause CONCRETE_VARIABLES */

extern void LowerBound__INITIALISATION(void);

/* Clause OPERATIONS */

extern void LowerBound__lower_bound(int32_t *array, int32_t value, int32_t *pos);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _LowerBound_h */
