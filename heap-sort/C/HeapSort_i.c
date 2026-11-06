/* WARNING if type checker is not performed, translation could contain errors ! */

#include "HeapSort.h"

/* Clause SEES */
#include "Ctx_HeapSort.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t HeapSort__array[Ctx_HeapSort__max_IDX+1];
/* Clause INITIALISATION */
void HeapSort__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_HeapSort__max_IDX;i++)
    {
        HeapSort__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void HeapSort__set_cell(int32_t pos, int32_t value)
{
    HeapSort__array[pos] = value;
}

void HeapSort__sort(void)
{
    {
        int32_t ii;
        int32_t hh;
        
        hh = Ctx_HeapSort__max_IDX-1;
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
                while(((lc) <= (Ctx_HeapSort__max_IDX)) &&
                (gg == 1))
                {
                    rc = lc+1;
                    pp = lc;
                    if((rc) <= (Ctx_HeapSort__max_IDX))
                    {
                        vl = HeapSort__array[lc];
                        vr = HeapSort__array[rc];
                        if((vl) < (vr))
                        {
                            pp = rc;
                        }
                    }
                    vj = HeapSort__array[jj];
                    vp = HeapSort__array[pp];
                    if((vj) < (vp))
                    {
                        HeapSort__array[jj] = vp;
                        HeapSort__array[pp] = vj;
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
    {
        int32_t nn;
        int32_t wz;
        int32_t wn;
        
        nn = Ctx_HeapSort__max_IDX;
        while((0) < (nn))
        {
            wz = HeapSort__array[0];
            wn = HeapSort__array[nn];
            HeapSort__array[0] = wn;
            HeapSort__array[nn] = wz;
            nn = nn-1;
            {
                int32_t kk;
                int32_t lk;
                int32_t rk;
                int32_t mk;
                int32_t gk;
                int32_t uk;
                int32_t um;
                int32_t ul;
                int32_t ur;
                
                kk = 0;
                lk = 1;
                gk = 1;
                while(((lk) <= (nn)) &&
                (gk == 1))
                {
                    rk = lk+1;
                    mk = lk;
                    if((rk) <= (nn))
                    {
                        ul = HeapSort__array[lk];
                        ur = HeapSort__array[rk];
                        if((ul) < (ur))
                        {
                            mk = rk;
                        }
                    }
                    uk = HeapSort__array[kk];
                    um = HeapSort__array[mk];
                    if((uk) < (um))
                    {
                        HeapSort__array[kk] = um;
                        HeapSort__array[mk] = uk;
                        kk = mk;
                        lk = 2 * kk+1;
                    }
                    else
                    {
                        gk = 0;
                    }
                }
            }
        }
    }
}

