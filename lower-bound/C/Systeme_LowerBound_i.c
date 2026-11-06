/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_LowerBound.h"

/* Clause IMPORTS */
#include "Ctx_LowerBound.h"
#include "LowerBound.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_LowerBound__INITIALISATION(void)
{
    
    Ctx_LowerBound__INITIALISATION();
    LowerBound__INITIALISATION();
}

