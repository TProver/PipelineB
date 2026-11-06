/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_CountArray.h"

/* Clause IMPORTS */
#include "Ctx_CountArray.h"
#include "CountArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_CountArray__INITIALISATION(void)
{
    
    Ctx_CountArray__INITIALISATION();
    CountArray__INITIALISATION();
}

