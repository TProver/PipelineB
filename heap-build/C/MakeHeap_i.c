/* WARNING if type checker is not performed, translation could contain errors ! */

#include "MakeHeap.h"

/* Clause SEES */
#include "Ctx_MakeHeap.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t MakeHeap__array[Ctx_MakeHeap__max_IDX+1];
/* Clause INITIALISATION */
void MakeHeap__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_MakeHeap__max_IDX;i++)
    {
        MakeHeap__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void MakeHeap__make_heap(void)
{
    int32_t ii;
    int32_t hh;
    
    hh = Ctx_MakeHeap__max_IDX-1;
    ii = hh / 2;
    while((0) <= (ii))
    {
        {
            int32_t jj;
            int32_t lc;
            int32_t rc;
            int32_t pp;
            int32_t gg;
            int32_t vj;
            int32_t vp;
            int32_t vl;
            int32_t vr;
            
            jj = ii;
            lc = 2 * jj+1;
            gg = 1;
            while(((lc) <= (Ctx_MakeHeap__max_IDX)) &&
            (gg == 1))
            {
                rc = lc+1;
                pp = lc;
                if((rc) <= (Ctx_MakeHeap__max_IDX))
                {
                    vl = MakeHeap__array[lc];
                    vr = MakeHeap__array[rc];
                    if((vl) < (vr))
                    {
                        pp = rc;
                    }
                }
                vj = MakeHeap__array[jj];
                vp = MakeHeap__array[pp];
                if((vj) < (vp))
                {
                    MakeHeap__array[jj] = vp;
                    MakeHeap__array[pp] = vj;
                    jj = pp;
                    lc = 2 * jj+1;
                }
                else
                {
                    gg = 0;
                }
            }
        }
        ii = ii-1;
    }
}

void MakeHeap__set_cell(int32_t pos, int32_t value)
{
    MakeHeap__array[pos] = value;
}

