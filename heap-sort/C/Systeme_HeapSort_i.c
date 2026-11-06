/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_HeapSort.h"

/* Clause IMPORTS */
#include "Ctx_HeapSort.h"
#include "HeapSort.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_HeapSort__INITIALISATION(void)
{
    
    Ctx_HeapSort__INITIALISATION();
    HeapSort__INITIALISATION();
}

