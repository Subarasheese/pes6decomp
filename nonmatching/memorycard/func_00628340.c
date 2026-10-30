/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063CEA0();                                /* extern */
s32 func_00645860(M2C_UNK);                         /* extern */
M2C_UNK func_006557C0();                            /* extern */
M2C_UNK func_00655940();                            /* extern */
M2C_UNK func_00655D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00656020(s32, M2C_UNK);                /* extern */
extern char D_0065C168[];

s32 func_00628340(void *arg0) {
    M2C_UNK var_s1;
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_v1) {                              /* irregular */
    case -125:
        var_s1 = 0xD;
        break;
    case -126:
        var_s1 = 0xF;
        break;
    case -127:
        var_s1 = 0xB;
        break;
    default:
    case -122:
        var_s1 = 0x10;
        break;
    }
    func_00655940();
    func_00656020(func_00645860(var_s1), 0);
    if ((u32) (M2C_FIELD(arg0, s32 *, 4) + 0x7F) >= 3U) {
        func_00655D80(func_00645860(0x4B), 0);
        func_00655D80(func_00645860(0x4C), 1);
        M2C_FIELD(arg0, s8 *, 2) = 0;
        var_s0 = 1;
        (*(s16 *)D_0065C168) = func_0063CEA0() * 2;
    } else {
        var_s0 = 0;
        (*(s16 *)D_0065C168) = 0;
    }
    func_006557C0();
    return var_s0;
}
