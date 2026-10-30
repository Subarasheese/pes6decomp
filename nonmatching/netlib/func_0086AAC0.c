/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874090(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086AAC0(s32 *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6) {
    s32 var_s1;
    void *temp_s0;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg3 != NULL) && (arg4 != NULL) && (arg5 != NULL) && (arg6 != NULL)) {
        if (*arg0 != 0x4A11) {
            return -0x46;
        }
        func_00874470();
        func_00874120(arg0, arg4);
        func_00873F60(arg0, arg1);
        func_001C48E8(arg1 + 4, 0, 0x31);
        func_00873EE0(arg0, arg1 + 4, 0x30);
        func_00873F60(arg0, arg1 + 0x160);
        func_001C48E8(arg1 + 0x164, 0, 0x31);
        func_00873EE0(arg0, arg1 + 0x164, 0x30);
        func_00874120(arg0, arg1 + 0x195);
        func_00874120(arg0, arg1 + 0x35);
        func_00873F60(arg0, arg1 + 0x150);
        func_00874090(arg0, arg1 + 0x14C);
        func_00874040(arg0, arg1 + 0x36);
        func_00874040(arg0, arg1 + 0x38);
        func_00874040(arg0, arg1 + 0x3A);
        func_00874040(arg0, arg1 + 0x3C);
        func_00874040(arg0, arg1 + 0x3E);
        func_00874040(arg0, arg1 + 0x40);
        func_00874040(arg0, arg1 + 0x42);
        func_00873F60(arg0, arg1 + 0x154);
        func_00873F60(arg0, arg1 + 0x158);
        func_001C48E8(arg1 + 0x4A, 0, 0x101);
        func_00873EE0(arg0, arg1 + 0x4A, 0x100);
        func_00873F60(arg0, arg1 + 0x15C);
        var_s1 = 0;
        do {
            temp_s0 = arg1 + (var_s1 * 8);
            func_00874040(arg0, temp_s0 + 0x1A6);
            func_00874040(arg0, temp_s0 + 0x1A8);
            func_00874040(arg0, temp_s0 + 0x1AA);
            var_s1 += 1;
        } while (var_s1 < 5);
        func_001C48E8(arg2, 0, 0x2C);
        func_00873EE0(arg0, arg2 + 4, 0x10);
        func_001C48E8(arg3, 0, 0x20);
        func_00873EE0(arg0, arg3, 0x20);
        func_00874120(arg0, arg1 + 0x14B);
        func_00874120(arg0, arg1 + 0x196);
        func_00874090(arg0, arg2 + 0x16);
        func_00873EE0(arg0, arg2 + 0x18, 0x10);
        func_00874090(arg0, arg2 + 0x2A);
        func_00874090(arg0, arg5);
        func_00874120(arg0, arg6);
        M2C_FIELD(arg1, s8 *, 0x1A2) = 0;
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
