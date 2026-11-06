/* WARNING if type checker is not performed, translation could contain errors ! */

#include "ReverseArray.h"

/* Clause SEES */
#include "Ctx_ReverseArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t ReverseArray__array[Ctx_ReverseArray__max_IDX+1];
/* Clause INITIALISATION */
void ReverseArray__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_ReverseArray__max_IDX;i++)
    {
        ReverseArray__array[i] = 0;
    }
    {
        int32_t jj;
        
        jj = 0;
        while((jj) <= (Ctx_ReverseArray__max_IDX))
        {
            ReverseArray__array[jj] = jj;
            jj = jj+1;
        }
    }
}

/* Clause OPERATIONS */

void ReverseArray__reverse(void)
{
    int32_t ll;
    int32_t hh;
    int32_t vl;
    int32_t vh;
    
    ll = 0;
    hh = Ctx_ReverseArray__max_IDX;
    while((ll) < (hh))
    {
        vl = ReverseArray__array[ll];
        vh = ReverseArray__array[hh];
        ReverseArray__array[ll] = vh;
        ReverseArray__array[hh] = vl;
        ll = ll+1;
        hh = hh-1;
    }
}

