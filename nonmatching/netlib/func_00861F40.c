/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00867F00(s32 *, void *);               /* extern */
s32 func_00867F80(s32 *, s32);                      /* extern */
s32 func_008681A0(s32 *, void *);                   /* extern */

s32 func_00861F40(void *arg0, s32 *arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = *arg1;
    var_s0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0x3004:
        M2C_FIELD(arg0, s32 *, 0xF8A0) = 0;
        var_s0 = func_00867F80(arg1, arg0 + 0x4830);
        func_001C48E8(arg0 + (arg2 * 0x11) + 0x19E, 0, 0x10);
        break;
    case 0x3002:
        M2C_FIELD(arg0, s32 *, 0xF8A0) = 0;
        var_s0 = func_008681A0(arg1, arg0 + (arg2 * 0x11) + 0x19E);
        break;
    default:
        var_s0 = -0x46;
        break;
    case 0x3F02:
        M2C_FIELD(arg0, s32 *, 0xF8A0) = 0;
        func_00867F00(arg1, arg0 + 0x4830);
        func_001C48E8(arg0 + 0x1C0, 0, 0x10);
        break;
    }
    return var_s0;
}
