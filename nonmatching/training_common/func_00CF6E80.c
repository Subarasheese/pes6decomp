/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00CD4CB0(s32, s32);
extern s32 func_00CD4B80(s32);
M2C_UNK func_00264840(void *, M2C_UNK);             /* extern */
s32 func_00CD4AB0(void *);                          /* extern */
s32 func_00CD5030(void *, M2C_UNK);                 /* extern */

s32 func_00CF6E80(void *arg0) {
    s32 var_v0;

    if ((M2C_FIELD(arg0, s32 *, 0x94) == 0) && (func_00CD5030(arg0 + 0x7C, 1) != 0)) {
        func_00264840(arg0 + 0x7C, 0);
        M2C_FIELD(arg0, s32 *, 0x94) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xB0) == 0) && (func_00CD4CB0((s32) (arg0 + 0x98), 6) != 0)) {
        func_00264840(arg0 + 0x98, 0);
        M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xCC) == 0) && (func_00CD4B80((s32) (arg0 + 0xB4)) != 0)) {
        func_00264840(arg0 + 0xB4, 0);
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xE8) == 0) && (func_00CD4AB0(arg0 + 0xD0) != 0)) {
        func_00264840(arg0 + 0xD0, 0);
        M2C_FIELD(arg0, s32 *, 0xE8) = 1;
    }
    var_v0 = M2C_FIELD(arg0, s32 *, 0x94) != 0;
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xB0) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xCC) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xE8) != 0;
    }
    return var_v0;
}
