/* WARNING if type checker is not performed, translation could contain errors ! */

#include "SelectionSort.h"

/* Clause SEES */
#include "Ctx_SelectionSort.h"

/* Clause IMPORTS */
#include "SelectionSort_1.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

int32_t SelectionSort__array[Ctx_SelectionSort__max_IDX+1];
/* Clause INITIALISATION */
void SelectionSort__INITIALISATION(void)
{
    
    unsigned int i = 0;
    SelectionSort_1__INITIALISATION();
    for(i = 0; i <= Ctx_SelectionSort__max_IDX;i++)
    {
        SelectionSort__array[i] = 0;
    }
}

/* Clause OPERATIONS */

void SelectionSort__set_cell(int32_t pos, int32_t value)
{
    SelectionSort__array[pos] = value;
}

void SelectionSort__sort(void)
{
    int32_t ii;
    int32_t mm;
    int32_t vi;
    int32_t vm;
    
    ii = 0;
    while((ii) < (Ctx_SelectionSort__max_IDX))
    {
        SelectionSort_1__min_from_1(SelectionSort__array, ii, &mm);
        vi = SelectionSort__array[ii];
        vm = SelectionSort__array[mm];
        SelectionSort__array[ii] = vm;
        SelectionSort__array[mm] = vi;
        ii = ii+1;
    }
}

