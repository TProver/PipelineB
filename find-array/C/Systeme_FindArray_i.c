/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_FindArray.h"

/* Clause IMPORTS */
#include "Ctx_FindArray.h"
#include "FindArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_FindArray__INITIALISATION(void)
{
    
    Ctx_FindArray__INITIALISATION();
    FindArray__INITIALISATION();
}

