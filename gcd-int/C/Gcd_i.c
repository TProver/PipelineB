/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Gcd.h"

/* Clause SEES */
#include "Ctx_Gcd.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Gcd__INITIALISATION(void)
{
    
}

/* Clause OPERATIONS */

void Gcd__gcd(int32_t aa, int32_t bb, int32_t *res)
{
    int32_t l_1;
    int32_t l_2;
    
    (*res) = aa;
    l_1 = bb;
    while((l_1) != (0))
    {
        l_2 = (*res) % l_1;
        (*res) = l_1;
        l_1 = l_2;
    }
}

