/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Luhn.h"

/* Clause SEES */
#include "Ctx_Luhn.h"

/* Clause IMPORTS */
#include "Luhn_1.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

/* Clause INITIALISATION */
void Luhn__INITIALISATION(void)
{
    
    Luhn_1__INITIALISATION();
}

/* Clause OPERATIONS */

void Luhn__add_digit(int32_t dd)
{
    int32_t l_1;
    int32_t l_2;
    int32_t l_3;
    int32_t l_4;
    int32_t l_5;
    int32_t l_6;
    int32_t l_7;
    int32_t l_8;
    
    Luhn_1__acs_read_sum_now(&l_1);
    Luhn_1__acs_empile_num(dd);
    Luhn_1__acs_read_sum_next(&l_3);
    l_2 = dd+l_3;
    Luhn_1__acs_write_sum_now(l_2);
    l_8 = dd / 5;
    l_7 = 9 * l_8;
    l_6 = dd-l_7;
    l_5 = dd+l_6;
    l_4 = l_5+l_1;
    Luhn_1__acs_write_sum_next(l_4);
}

void Luhn__clear_number(void)
{
    Luhn_1__acs_vide_pile_num();
    Luhn_1__acs_write_sum_now(0);
    Luhn_1__acs_write_sum_next(0);
}

void Luhn__control_digit(int32_t *cc)
{
    int32_t l_1;
    int32_t l_2;
    int32_t l_3;
    
    Luhn_1__acs_read_sum_next(&l_3);
    l_2 = l_3 % 10;
    l_1 = 10-l_2;
    (*cc) = l_1 % 10;
}

void Luhn__digit_at(int32_t pp, int32_t *dd)
{
    Luhn_1__acs_lit_rang_pile_num(pp, dd);
}

void Luhn__number_length(int32_t *ll)
{
    Luhn_1__acs_taille_num(ll);
}

void Luhn__verify(bool *rr)
{
    bool l_1;
    bool l_2;
    int32_t l_3;
    int32_t l_4;
    int32_t l_5;
    
    Luhn_1__acs_taille_num(&l_3);
    l_1 = (((2) <= (l_3)) ? true : false);
    Luhn_1__acs_read_sum_now(&l_5);
    l_4 = l_5 % 10;
    l_2 = ((l_4 == 0) ? true : false);
    (*rr) = (((l_1 == true) &&(l_2 == true)) ? true : false);
}

