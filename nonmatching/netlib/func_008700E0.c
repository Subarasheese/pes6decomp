/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void memclr(void *, int);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874090(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008700E0(s32 *arg0, void *arg1, s32 *arg2, s32 arg3, s32 *arg4, s8 *arg5, void *arg6) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    void *temp_s0;
    void *temp_v1;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg4 != NULL) && (arg5 != NULL) && (arg6 != NULL)) {
        if (*arg0 != 0x4103) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg2);
        if (*arg2 != 0) {
            func_00874460(arg0);
            return 0;
        }
        func_00873F60(arg0, arg1);
        memclr(arg1 + 4, 0x31);
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
        memclr(arg1 + 0x4A, 0x101);
        func_00873EE0(arg0, arg1 + 0x4A, 0x100);
        func_00873F60(arg0, arg1 + 0x15C);
        var_a0 = 0;
        do {
            temp_v1 = arg1 + (var_a0 * 8);
            var_a0 += 1;
            M2C_FIELD(temp_v1, s8 *, 0x1A4) = 0;
            M2C_FIELD(temp_v1, s16 *, 0x1A6) = 0;
            M2C_FIELD(temp_v1, s16 *, 0x1A8) = 0;
            M2C_FIELD(temp_v1, s16 *, 0x1AA) = 0;
        } while (var_a0 < 5);
        var_s1 = 0;
        do {
            temp_s0 = arg1 + (var_s1 * 8);
            func_00874040(arg0, temp_s0 + 0x1A6);
            func_00874040(arg0, temp_s0 + 0x1A8);
            func_00874040(arg0, temp_s0 + 0x1AA);
            var_s1 += 1;
        } while (var_s1 < 2);
        func_00874120(arg0, arg1 + 0x14B);
        func_00874120(arg0, arg1 + 0x196);
        var_s0 = 0;
        do {
            func_00874040(arg0, arg1 + (var_s0 * 2) + 0x198);
            var_s0 += 1;
        } while (var_s0 < 5);
        M2C_FIELD(arg1, s8 *, 0x1A2) = 0;
        func_00874460(arg0);
        if ((arg3 != 0) && (arg3 == M2C_FIELD(arg1, s32 *, 0))) {
            *arg4 = M2C_FIELD(arg1, s32 *, 0x160);
            *arg5 = M2C_FIELD(arg1, s8 *, 0x195);
            func_001C48E8(arg6, 0, 0x31);
            func_001C4730(arg6, arg1 + 0x164, 0x30);
            M2C_FIELD(arg6, s8 *, 0x30) = 0;
        }
        return 0x4103;
    }
    return -0x18;
}
