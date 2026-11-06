/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_Gcd.h"

/* Clause IMPORTS */
#include "Ctx_Gcd.h"
#include "Gcd.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_Gcd__INITIALISATION(void)
{
    
    Ctx_Gcd__INITIALISATION();
    Gcd__INITIALISATION();
}

