/* WARNING if type checker is not performed, translation could contain errors ! */

#include "SortedArray.h"

/* Clause SEES */
#include "Ctx_SortedArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void SortedArray__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void SortedArray__is_sorted(int32_t *array, bool *res)
{
    int32_t l_1;
    int32_t l_2;
    int32_t l_3;
    
    (*res) = true;
    l_1 = 0;
    while(((l_1) < (Ctx_SortedArray__max_IDX)) &&
    ((*res) == true))
    {
        l_2 = array[l_1];
        l_1 = l_1+1;
        l_3 = array[l_1];
        if((l_3) < (l_2))
        {
            (*res) = false;
        }
    }
}

