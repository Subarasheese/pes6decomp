/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00821680();                                /* extern */
s32 func_00821690();                                /* extern */
s32 func_0082C2A0();                                /* extern */
M2C_UNK func_0082C840(s32);                         /* extern */
s32 func_00866340(s32, s32, s32, M2C_UNK);          /* extern */
extern char D_008A64B4[];

s32 func_00940510(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == 0) {
        return 2;
    }
    temp_s0 = func_00821690();
    temp_v0_2 = func_00866340(temp_v0, temp_s0, func_00821680(), 0x14);
    switch (temp_v0_2) {                            /* irregular */
    case -102:
        return 0;
    case -64:
        return 0;
    case 0:
        var_s0 = 0;
        (*(s32 *)D_008A64B4) = 0;
        do {
            func_0082C840(var_s0);
            var_s0 += 1;
        } while (var_s0 < 0xBB);
        return 4;
    default:
        return 1;
    }
}
