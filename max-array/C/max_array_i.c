/* WARNING if type checker is not performed, translation could contain errors ! */

#include "max_array.h"

/* Clause SEES */
#include "ctx.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void max_array__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void max_array__getMaximum(int32_t *array, int32_t *maxi)
{
    int32_t l_1;
    int32_t l_2;
    
    (*maxi) = array[0];
    l_1 = 1;
    while((l_1) <= (ctx__NN))
    {
        l_2 = array[l_1];
        if(((*maxi)) < (l_2))
        {
            (*maxi) = l_2;
        }
        l_1 = l_1+1;
    }
}

