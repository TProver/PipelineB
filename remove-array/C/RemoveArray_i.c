/* WARNING if type checker is not performed, translation could contain errors ! */

#include "RemoveArray.h"

/* Clause SEES */
#include "Ctx_RemoveArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t RemoveArray__array[Ctx_RemoveArray__max_IDX+1];
/* Clause INITIALISATION */
void RemoveArray__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_RemoveArray__max_IDX;i++)
    {
        RemoveArray__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void RemoveArray__remove(int32_t value, int32_t *kept)
{
    {
        int32_t rd;
        int32_t wr;
        int32_t vr;
        
        rd = 0;
        wr = 0;
        while((rd) <= (Ctx_RemoveArray__max_IDX))
        {
            vr = RemoveArray__array[rd];
            if((vr) != (value))
            {
                RemoveArray__array[wr] = vr;
                wr = wr+1;
            }
            rd = rd+1;
        }
        (*kept) = wr;
    }
}

void RemoveArray__set_cell(int32_t pos, int32_t val)
{
    RemoveArray__array[pos] = val;
}

