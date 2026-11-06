#ifndef _Ctx_Luhn_h
#define _Ctx_Luhn_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
#define Ctx_Luhn__max_DIGIT 9
typedef int Ctx_Luhn__DIGIT;
#define Ctx_Luhn__max_IDX 18
typedef int Ctx_Luhn__IDX;
#define Ctx_Luhn__max_CHARCODE 255
typedef int Ctx_Luhn__CHARCODE;
#define Ctx_Luhn__CODE_ZERO 48
#define Ctx_Luhn__CODE_SPACE 32
#define Ctx_Luhn__CODE_DASH 45
/* Array and record constants */










/* Clause CONCRETE_VARIABLES */

extern void Ctx_Luhn__INITIALISATION(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _Ctx_Luhn_h */
