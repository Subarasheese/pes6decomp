/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00CD4CB0(s32, s32);
extern s32 func_00CD4B80(s32);
M2C_UNK func_00264840(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C71F40();                            /* extern */
s32 func_00CD4980(void *);                          /* extern */
s32 func_00CD4AB0(void *);                          /* extern */
s32 func_00CD5030(void *, M2C_UNK);                 /* extern */
s32 func_00CD5510(void *);                          /* extern */

s32 func_00CCE4B0(void *arg0) {
    s32 var_v0;

    if ((M2C_FIELD(arg0, s32 *, 0x450) == 0) && (M2C_FIELD(arg0, s32 *, 0x46C) != 0) && (M2C_FIELD(arg0, s32 *, 0x488) != 0) && (M2C_FIELD(arg0, s32 *, 0x4A4) != 0) && (M2C_FIELD(arg0, s32 *, 0x4C0) != 0) && (M2C_FIELD(arg0, s32 *, 0x4DC) != 0) && (M2C_FIELD(arg0, s32 *, 0x4E0) != 0) && (func_00CD5510(arg0 + 0x438) != 0)) {
        func_00C71F40();
        func_00264840(arg0 + 0x438, 0);
        M2C_FIELD(arg0, s32 *, 0x450) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x46C) == 0) && (func_00CD5030(arg0 + 0x454, 1) != 0)) {
        func_00264840(arg0 + 0x454, 0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x488) == 0) && (func_00CD4CB0((s32) (arg0 + 0x470), 6) != 0)) {
        func_00264840(arg0 + 0x470, 0);
        M2C_FIELD(arg0, s32 *, 0x488) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x4A4) == 0) && (func_00CD4B80((s32) (arg0 + 0x48C)) != 0)) {
        func_00264840(arg0 + 0x48C, 0);
        M2C_FIELD(arg0, s32 *, 0x4A4) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x4C0) == 0) && (func_00CD4AB0(arg0 + 0x4A8) != 0)) {
        func_00264840(arg0 + 0x4A8, 0);
        M2C_FIELD(arg0, s32 *, 0x4C0) = 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x4DC) == 0) && (func_00CD4980(arg0 + 0x4C4) != 0)) {
        func_00264840(arg0 + 0x4C4, 0);
        M2C_FIELD(arg0, s32 *, 0x4DC) = 1;
    }
    var_v0 = M2C_FIELD(arg0, s32 *, 0x450) != 0;
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x46C) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x488) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4A4) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4C0) != 0;
    }
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4DC) != 0;
    }
    return var_v0;
}
