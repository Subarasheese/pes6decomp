/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
s32 func_008153B0();                                /* extern */
s32 func_00815450();                                /* extern */
M2C_UNK func_00817930();                            /* extern */
extern char D_00888370[];
extern char D_008A3CA0[];
extern char D_008A3CA8[];
extern char D_008A3CB0[];
extern char D_008A3CB8[];
extern void *D_008A3CC0;

s32 func_008187D0(void) {
    s32 var_v0;

    if ((*(s32 *)D_008A3CA0) == 0) {
        var_v0 = 1;
    } else {
        (*(s32 *)D_008A3CA8) = 1;
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        (*(s32 *)D_008A3CB8) = 0;
        func_002F4E10(D_008A3CC0);
        D_008A3CC0 = NULL;
        func_00817930();
        (*(s32 *)D_008A3CA0) = 0;
        if (((*(s32 *)D_008A3CB0) == 1) && ((func_00815450() != 0) || (func_008153B0() != 0))) {
            func_00815100(((void *)D_00888370));
        }
        (*(s32 *)D_008A3CB0) = 0;
        (*(s32 *)D_008A3CA8) = 0;
    }
    return 0;
}
