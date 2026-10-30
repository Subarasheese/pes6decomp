/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00CD4CB0(s32, s32);
extern s32 func_00CD4B80(s32);
M2C_UNK func_00264840(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C71F40();                            /* extern */
s32 func_00CD4AB0(void *);                          /* extern */
s32 func_00CD5030(void *, M2C_UNK);                 /* extern */
s32 func_00CD5510(void *);                          /* extern */

s32 func_00CD6800(void *arg0) {
    s32 var_v0;

    if ((M2C_FIELD(arg0, s32 *, 0x30) == 0) && (M2C_FIELD(arg0, s32 *, 0x4C) != 0) && (M2C_FIELD(arg0, s32 *, 0x68) != 0) && (M2C_FIELD(arg0, s32 *, 0x84) != 0) && (M2C_FIELD(arg0, s32 *, 0xA0) != 0) && (M2C_FIELD(arg0, s32 *, 0xA4) != 0) && (func_00CD5510(arg0 + 0x18) != 0)) {
        func_00C71F40();
        func_00264840(arg0 + 0x18, 0);
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x4C) == 0) && (func_00CD5030(arg0 + 0x34, 1) != 0)) {
        func_00264840(arg0 + 0x34, 0);
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x68) == 0) && (func_00CD4CB0((s32) (arg0 + 0x50), 6) != 0)) {
        func_00264840(arg0 + 0x50, 0);
        M2C_FIELD(arg0, s32 *, 0x68) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x84) == 0) && (func_00CD4B80((s32) (arg0 + 0x6C)) != 0)) {
        func_00264840(arg0 + 0x6C, 0);
        M2C_FIELD(arg0, s32 *, 0x84) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xA0) == 0) && (func_00CD4AB0(arg0 + 0x88) != 0)) {
        func_00264840(arg0 + 0x88, 0);
        M2C_FIELD(arg0, s32 *, 0xA0) = 1;
    }
    var_v0 = M2C_FIELD(arg0, s32 *, 0x30) != 0;
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4C) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x68) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x84) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xA0) != 0;
    }
    return var_v0;
}
