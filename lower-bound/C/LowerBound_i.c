/* WARNING if type checker is not performed, translation could contain errors ! */

#include "LowerBound.h"

/* Clause SEES */
#include "Ctx_LowerBound.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void LowerBound__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void LowerBound__lower_bound(int32_t *array, int32_t value, int32_t *pos)
{
    int32_t l_1;
    int32_t l_2;
    int32_t l_3;
    int32_t l_4;
    
    (*pos) = 0;
    l_1 = Ctx_LowerBound__max_IDX+1;
    while(((*pos)) < (l_1))
    {
        l_2 = (*pos)+l_1;
        l_3 = l_2 / 2;
        l_4 = array[l_3];
        if((l_4) < (value))
        {
            (*pos) = l_3+1;
        }
        else
        {
            l_1 = l_3;
        }
    }
}

