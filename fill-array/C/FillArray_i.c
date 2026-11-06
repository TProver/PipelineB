/* WARNING if type checker is not performed, translation could contain errors ! */

#include "FillArray.h"

/* Clause SEES */
#include "Ctx_FillArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t FillArray__array[Ctx_FillArray__max_IDX+1];
/* Clause INITIALISATION */
void FillArray__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= Ctx_FillArray__max_IDX;i++)
    {
        FillArray__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void FillArray__set_array_value(void)
{
    int32_t jj;
    
    jj = 0;
    while((jj) <= (Ctx_FillArray__max_IDX))
    {
        FillArray__array[jj] = jj;
        jj = jj+1;
    }
}

