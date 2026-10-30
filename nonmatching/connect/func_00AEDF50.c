/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
extern char D_00AFFA90[];
extern char D_00AFFA94[];
extern char D_00AFFA98[];

void func_00AEDF50(void *arg0, s32 arg1) {
    M2C_UNK *var_a1;

    switch (arg1) {                                 /* irregular */
    default:
        var_a1 = ((void *)D_00AFFA90);
        break;
    case 2:
        var_a1 = ((void *)D_00AFFA98);
        break;
    case 3:
    case 1:
        var_a1 = ((void *)D_00AFFA94);
        break;
    }
    if (arg0 != NULL) {
        func_001DF460(M2C_FIELD(arg0, void **, 8), var_a1);
    }
}
