/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Isqrt.h"

/* Clause SEES */
#include "Ctx_Isqrt.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Isqrt__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void Isqrt__isqrt(int32_t nn, int32_t *res)
{
    int32_t l_1;
    int32_t l_2;
    int32_t l_3;
    int32_t l_4;
    int32_t l_5;
    
    (*res) = 0;
    l_1 = Ctx_Isqrt__max_ROOT+1;
    l_2 = 1;
    while((l_2) < (l_1))
    {
        l_3 = l_2+l_1;
        l_4 = l_3 / 2;
        l_5 = l_4 * l_4;
        if((l_5) <= (nn))
        {
            (*res) = l_4;
            l_2 = l_4+1;
        }
        else
        {
            l_1 = l_4;
        }
    }
}

