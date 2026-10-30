/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
s32 func_00158B68();                                /* extern */
M2C_UNK func_001590E8(s32, s32 *);                  /* extern */
extern char D_011E21F0[];
extern char D_011E21F8[];

s32 func_00155D70(void) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00158B68() == 0) {
        (*(s32 *)D_011E21F8) = func_00158B88();
        func_001590E8((*(s32 *)D_011E21F0), ((void *)D_011E21F8));
        var_v0 = 1;
    }
    return var_v0;
}
