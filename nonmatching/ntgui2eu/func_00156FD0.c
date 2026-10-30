/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
s32 func_00158B68();                                /* extern */
M2C_UNK func_00158B98(M2C_UNK *);                   /* extern */
extern char D_011E37A8[];
extern char D_011E37B8[];

s32 func_00156FD0(void) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (func_00158B68() == 0) {
        temp_v0 = func_00158B88();
        (*(s32 *)D_011E37A8) = temp_v0;
        if (temp_v0 >= 0) {
            func_00158B98(((void *)D_011E37B8));
        }
        var_v0 = 1;
    }
    return var_v0;
}
