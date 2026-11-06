/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Systeme_Luhn.h"

/* Clause IMPORTS */
#include "Ctx_Luhn.h"
#include "Luhn.h"
#include "Digit_input.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Systeme_Luhn__INITIALISATION(void)
{
    
    Ctx_Luhn__INITIALISATION();
    Digit_input__INITIALISATION();
    Luhn__INITIALISATION();
}

