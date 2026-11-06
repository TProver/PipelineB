/* WARNING if type checker is not performed, translation could contain errors ! */

#include "SelectionSort_1.h"

/* Clause SEES */
#include "Ctx_SelectionSort.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void SelectionSort_1__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void SelectionSort_1__min_from_1(int32_t *par_in_0_1, int32_t ii, int32_t *mm)
{
    {
        int32_t jj;
        int32_t bb;
        int32_t vj;
        int32_t vb;
        
        bb = ii;
        jj = ii+1;
        while((jj) <= (Ctx_SelectionSort__max_IDX))
        {
            vj = par_in_0_1[jj];
            vb = par_in_0_1[bb];
            if((vj) < (vb))
            {
                bb = jj;
            }
            jj = jj+1;
        }
        (*mm) = bb;
    }
}

