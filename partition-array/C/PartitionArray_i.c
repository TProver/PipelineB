/* WARNING if type checker is not performed, translation could contain errors ! */

#include "PartitionArray.h"

/* Clause SEES */
#include "Ctx_PartitionArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t PartitionArray__array[Ctx_PartitionArray__max_IDX+1];
/* Clause INITIALISATION */
void PartitionArray__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_PartitionArray__max_IDX;i++)
    {
        PartitionArray__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void PartitionArray__partition(int32_t value, int32_t *low)
{
    {
        int32_t rd;
        int32_t wr;
        int32_t vr;
        int32_t vw;
        
        rd = 0;
        wr = 0;
        while((rd) <= (Ctx_PartitionArray__max_IDX))
        {
            vr = PartitionArray__array[rd];
            if((vr) < (value))
            {
                vw = PartitionArray__array[wr];
                PartitionArray__array[wr] = vr;
                PartitionArray__array[rd] = vw;
                wr = wr+1;
            }
            rd = rd+1;
        }
        (*low) = wr;
    }
}

void PartitionArray__set_cell(int32_t pos, int32_t value)
{
    PartitionArray__array[pos] = value;
}

