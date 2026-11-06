/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_PartitionArray.h"

/* Clause IMPORTS */
#include "Ctx_PartitionArray.h"
#include "PartitionArray.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_PartitionArray__INITIALISATION(void)
{
    
    Ctx_PartitionArray__INITIALISATION();
    PartitionArray__INITIALISATION();
}

