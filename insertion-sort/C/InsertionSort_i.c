/* WARNING if type checker is not performed, translation could contain errors ! */

#include "InsertionSort.h"

/* Clause SEES */
#include "Ctx_InsertionSort.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t InsertionSort__array[Ctx_InsertionSort__max_IDX+1];
/* Clause INITIALISATION */
void InsertionSort__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_InsertionSort__max_IDX;i++)
    {
        InsertionSort__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void InsertionSort__set_cell(int32_t pos, int32_t value)
{
    InsertionSort__array[pos] = value;
}

void InsertionSort__sort(void)
{
    int32_t ii;
    
    ii = 1;
    while((ii) <= (Ctx_InsertionSort__max_IDX))
    {
        {
            int32_t jj;
            int32_t pp;
            int32_t gg;
            int32_t vj;
            int32_t vp;
            
            jj = ii;
            gg = 1;
            while(((0) < (jj)) &&
            (gg == 1))
            {
                pp = jj-1;
                vj = InsertionSort__array[jj];
                vp = InsertionSort__array[pp];
                if((vj) < (vp))
                {
                    InsertionSort__array[jj] = vp;
                    InsertionSort__array[pp] = vj;
                    jj = pp;
                }
                else
                {
                    gg = 0;
                }
            }
        }
        ii = ii+1;
    }
}

