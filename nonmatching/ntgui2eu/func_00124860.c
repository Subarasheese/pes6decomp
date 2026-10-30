/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
s32 func_00154070(M2C_UNK *, M2C_UNK);              /* extern */
extern char D_005B3700[];
extern char D_005B3730[];
extern char D_005B3744[];
extern char D_005F93D8[];
extern M2C_UNK func_00124830;

s32 func_00124860(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00154070(((void *)D_005F93D8), -1);
    if (((temp_v0 == 1) && !((*(s32 *)D_005B3700) & 1)) || ((var_v0 = 0, (temp_v0 == 2)) && (var_v0 = 0, (((*(s32 *)D_005B3700) & 2) == 0)))) {
        func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x48), &func_00124830, (*(s32 *)D_005B3744));
        var_v0 = 1;
        (*(s32 *)D_005B3730) = 1;
    }
    return var_v0;
}
