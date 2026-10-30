/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
M2C_UNK func_00134FB0(s32);                         /* extern */
s32 func_00158B68();                                /* extern */
extern char D_005BEDB0[];
extern char D_005BEDBC[];
extern char D_011E3908[];

s32 func_001580F0(void) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (func_00158B68() == 0) {
        temp_v0 = func_00158B88();
        (*(s32 *)D_011E3908) = temp_v0;
        if (temp_v0 < 0) {
            func_00134FB0((*(s32 *)D_005BEDB0));
            (*(s32 *)D_005BEDB0) = 0;
            (*(s32 *)D_005BEDBC) = 0;
        }
        var_v0 = 1;
    }
    return var_v0;
}
