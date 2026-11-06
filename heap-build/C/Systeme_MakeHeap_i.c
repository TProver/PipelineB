/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_MakeHeap.h"

/* Clause IMPORTS */
#include "Ctx_MakeHeap.h"
#include "MakeHeap.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_MakeHeap__INITIALISATION(void)
{
    
    Ctx_MakeHeap__INITIALISATION();
    MakeHeap__INITIALISATION();
}

