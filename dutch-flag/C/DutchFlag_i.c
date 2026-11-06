/* WARNING if type checker is not performed, translation could contain errors ! */

#include "DutchFlag.h"

/* Clause SEES */
#include "Ctx_DutchFlag.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t DutchFlag__array[Ctx_DutchFlag__max_IDX+1];
/* Clause INITIALISATION */
void DutchFlag__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_DutchFlag__max_IDX;i++)
    {
        DutchFlag__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void DutchFlag__arrange(int32_t *first1, int32_t *first2)
{
    int32_t lo;
    int32_t md;
    int32_t hi;
    int32_t vm;
    int32_t vx;
    
    lo = 0;
    md = 0;
    hi = Ctx_DutchFlag__max_IDX+1;
    while((md) < (hi))
    {
        vm = DutchFlag__array[md];
        if(vm == 0)
        {
            vx = DutchFlag__array[lo];
            DutchFlag__array[lo] = vm;
            DutchFlag__array[md] = vx;
            lo = lo+1;
            md = md+1;
        }
        else
        {
            if(vm == 1)
            {
                md = md+1;
            }
            else
            {
                hi = hi-1;
                vx = DutchFlag__array[hi];
                DutchFlag__array[md] = vx;
                DutchFlag__array[hi] = vm;
            }
        }
    }
    (*first1) = lo;
    (*first2) = hi;
}

void DutchFlag__set_cell(int32_t pos, int32_t colour)
{
    DutchFlag__array[pos] = colour;
}

