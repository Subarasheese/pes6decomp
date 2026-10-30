/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
s32 func_008153B0();                                /* extern */
s32 func_00815450();                                /* extern */
extern char D_00888330[];
extern char D_008A3C78[];
extern char D_008A3C80[];
extern char D_008A3C88[];
extern char D_008A3C90[];
extern void *D_008A3C98;

s32 func_00817C00(void) {
    s32 var_v0;

    if ((*(s32 *)D_008A3C78) == 0) {
        var_v0 = 1;
    } else {
        (*(s32 *)D_008A3C88) = 1;
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        func_002F4E10(D_008A3C98);
        (*(s32 *)D_008A3C90) = 0;
        D_008A3C98 = NULL;
        (*(s32 *)D_008A3C78) = 0;
        if (((*(s32 *)D_008A3C80) == 1) && ((func_00815450() != 0) || (func_008153B0() != 0))) {
            func_00815100(((void *)D_00888330));
        }
        (*(s32 *)D_008A3C80) = 0;
        (*(s32 *)D_008A3C88) = 0;
    }
    return 0;
}
