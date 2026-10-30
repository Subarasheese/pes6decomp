/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00CD4CB0(s32, s32);
extern s32 func_00CD4B80(s32);
M2C_UNK func_00264840(void *, M2C_UNK);             /* extern */
s32 func_00CD5030(void *, M2C_UNK);                 /* extern */
s32 func_00CD5320(void *);                          /* extern */

s32 func_00CD3210(void *arg0) {
    s32 var_v0;

    if ((M2C_FIELD(arg0, s32 *, 0x50) == 0) && (M2C_FIELD(arg0, s32 *, 0x6C) != 0) && (M2C_FIELD(arg0, s32 *, 0x88) != 0) && (M2C_FIELD(arg0, s32 *, 0xA4) != 0) && (M2C_FIELD(arg0, s32 *, 0xA8) != 0) && (func_00CD5320(arg0 + 0x38) != 0)) {
        func_00264840(arg0 + 0x38, 0);
        M2C_FIELD(arg0, s32 *, 0x50) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x6C) == 0) && (func_00CD5030(arg0 + 0x54, 1) != 0)) {
        func_00264840(arg0 + 0x54, 0);
        M2C_FIELD(arg0, s32 *, 0x6C) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x88) == 0) && (func_00CD4CB0((s32) (arg0 + 0x70), 6) != 0)) {
        func_00264840(arg0 + 0x70, 0);
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xA4) == 0) && (func_00CD4B80((s32) (arg0 + 0x8C)) != 0)) {
        func_00264840(arg0 + 0x8C, 0);
        M2C_FIELD(arg0, s32 *, 0xA4) = 1;
    }
    var_v0 = M2C_FIELD(arg0, s32 *, 0x50) != 0;
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x6C) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x88) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xA4) != 0;
    }
    return var_v0;
}
