/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Power.h"

/* Clause SEES */
#include "Ctx_Power.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Power__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void Power__power(int32_t aa, int32_t nn, int32_t *res)
{
    int32_t l_1;
    int32_t l_2;
    int32_t l_3;
    int32_t l_4;
    int32_t l_5;
    
    (*res) = 1;
    l_1 = aa;
    l_2 = nn;
    while((l_2) != (0))
    {
        l_3 = l_2 % 2;
        l_4 = l_2 / 2;
        l_5 = l_1 * l_1;
        if(l_3 == 1)
        {
            (*res) = (*res) * l_1;
        }
        l_1 = l_5;
        l_2 = l_4;
    }
}

