/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_Power.h"

/* Clause IMPORTS */
#include "Ctx_Power.h"
#include "Power.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_Power__INITIALISATION(void)
{
    
    Ctx_Power__INITIALISATION();
    Power__INITIALISATION();
}

