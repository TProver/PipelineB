/* WARNING if type checker is not performed, translation could contain errors ! */

#include "CountArray.h"

/* Clause SEES */
#include "Ctx_CountArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void CountArray__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void CountArray__count(int32_t *array, int32_t value, int32_t *nb)
{
    int32_t l_1;
    int32_t l_2;
    
    (*nb) = 0;
    l_1 = 0;
    while((l_1) <= (Ctx_CountArray__max_IDX))
    {
        l_2 = array[l_1];
        if(l_2 == value)
        {
            (*nb) = (*nb)+1;
        }
        l_1 = l_1+1;
    }
}

