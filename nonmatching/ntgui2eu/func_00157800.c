/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
M2C_UNK func_00134FB0(s32);                         /* extern */
s32 func_00158B68();                                /* extern */
extern char D_005BEDA0[];
extern char D_005BEDA4[];
extern char D_011E38E4[];

s32 func_00157800(void) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (func_00158B68() == 0) {
        temp_v0 = func_00158B88();
        (*(s32 *)D_011E38E4) = temp_v0;
        if (temp_v0 < 0) {
            func_00134FB0((*(s32 *)D_005BEDA0));
            (*(s32 *)D_005BEDA0) = 0;
            (*(s32 *)D_005BEDA4) = 0;
        }
        var_v0 = 1;
    }
    return var_v0;
}
