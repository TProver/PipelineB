/* WARNING if type checker is not performed, translation could contain errors ! */

#include "FindArray.h"

/* Clause SEES */
#include "Ctx_FindArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void FindArray__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void FindArray__find(int32_t *array, int32_t value, int32_t *pos)
{
    int32_t l_1;
    int32_t l_2;
    
    (*pos) = 0;
    l_1 = Ctx_FindArray__max_IDX+1;
    while(((*pos)) < (l_1))
    {
        l_2 = array[(*pos)];
        if(l_2 == value)
        {
            l_1 = (*pos);
        }
        else
        {
            (*pos) = (*pos)+1;
        }
    }
}

