/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
s32 func_00158B68();                                /* extern */
extern char D_011E2440[];

s32 func_00156D98(void) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00158B68() == 0) {
        (*(s32 *)D_011E2440) = func_00158B88();
        var_v0 = 1;
    }
    return var_v0;
}
