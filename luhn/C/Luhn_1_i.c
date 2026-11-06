/* WARNING if type checker is not performed, translation could contain errors ! */

#include "Luhn_1.h"

/* Clause SEES */
#include "Ctx_Luhn.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static int32_t Luhn_1__num_n;
static int32_t Luhn_1__num_t[Ctx_Luhn__max_IDX+1];
static int32_t Luhn_1__sum_next;
static int32_t Luhn_1__sum_now;
/* Clause INITIALISATION */
void Luhn_1__INITIALISATION(void)
{
    
    unsigned int i = 0;
    Luhn_1__num_n = 0;
    for(i = 0; i <= Ctx_Luhn__max_IDX;i++)
    {
        Luhn_1__num_t[i] = 0;
    }
    Luhn_1__sum_next = 0;
    Luhn_1__sum_now = 0;
}

/* Clause OPERATIONS */

void Luhn_1__acs_empile_num(int32_t par_in_0_1)
{
    Luhn_1__num_t[Luhn_1__num_n] = par_in_0_1;
    Luhn_1__num_n = Luhn_1__num_n+1;
}

void Luhn_1__acs_lit_rang_pile_num(int32_t par_in_0_1, int32_t *par_out_0_1)
{
    (*par_out_0_1) = Luhn_1__num_t[par_in_0_1-1];
}

void Luhn_1__acs_read_sum_next(int32_t *par_out_0_1)
{
    (*par_out_0_1) = Luhn_1__sum_next;
}

void Luhn_1__acs_read_sum_now(int32_t *par_out_0_1)
{
    (*par_out_0_1) = Luhn_1__sum_now;
}

void Luhn_1__acs_taille_num(int32_t *par_out_0_1)
{
    (*par_out_0_1) = Luhn_1__num_n;
}

void Luhn_1__acs_vide_pile_num(void)
{
    Luhn_1__num_n = 0;
}

void Luhn_1__acs_write_sum_next(int32_t par_in_0_1)
{
    Luhn_1__sum_next = par_in_0_1;
}

void Luhn_1__acs_write_sum_now(int32_t par_in_0_1)
{
    Luhn_1__sum_now = par_in_0_1;
}

