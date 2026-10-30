/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 *func_002F7F80(s32, s32);                        /* extern */
M2C_UNK func_00B91490(M2C_UNK, s32, u32);           /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
extern s32 D_003EB1E4;
extern u8 D_003EB1E8;

s32 func_00C179E0(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_a1;
    s32 var_s1;
    s32 var_v0;
    u32 temp_a0;
    u32 var_a2;
    u8 *temp_v0_2;
    u8 temp_v0;
    void *temp_s0;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_s0 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x2D4) * 4) + arg0), void **, 4);
    var_s1 = 0;
    switch (D_003EB1E4) {                           /* irregular */
    case 0:
        temp_v0 = M2C_FIELD(temp_s0, u8 *, 3);
        D_003EB1E8 = temp_v0;
        if (M2C_FIELD(arg0, u16 *, 0x2E0) == 0x126) {
            M2C_FIELD(arg0, s8 *, 0x2F0) = 0;
            M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
            M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
        } else {
            var_a2 = temp_v0 & 0xFF;
            if (var_a2 != 0x58) {
                temp_a0 = var_a2 >> 0x1F;
                var_a1 = 0x66666667;
                M2C_FIELD(arg0, s8 *, 0x2F0) = (s8) (((temp_v0 & 0xFF) / 40) + temp_a0);
                M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) ((s32) var_a2 % 10);
                M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) ((s32) (((temp_v0 & 0xFF) / 10) + temp_a0) % 4);
            } else {
                M2C_FIELD(arg0, s8 *, 0x2F0) = 0;
                M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
                M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
            }
        }
        func_00B91490(0x34, var_a1, var_a2);
        func_00B91590(0x34, 1);
        D_003EB1E4 = 1;
        /* fallthrough */
    case 1:
        if (func_00BCF3A0(0x1000) == 0) {
            if (func_00BCF3A0(0x4000) == 0) {
                if (func_00BCF3A0(0x8000) == 0) {
                    if (func_00BCF3A0(0x40000) == 0) {
                        if (func_00BCF3A0(1) == 0) {
                            if (func_00BCF3A0(8) != 0) {
                                M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x2E8) + 1);
                                func_0026E840(0x8400F802);
                            }
                        } else {
                            M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x2E8) + 3);
                            func_0026E840(0x8400F802);
                        }
                        if (func_00BCF3A0(0x80) == 0) {
                            if (func_00BCF3A0(0x400) != 0) {
                                M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x2E4) + 1);
                                func_0026E840(0x8400F802);
                            }
                        } else {
                            M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x2E4) + 9);
                            func_0026E840(0x8400F802);
                        }
                        M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x2E4) % 10);
                        M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x2E8) % 4);
                    } else {
                        M2C_FIELD(arg0, s8 *, 0x2F0) = (s8) ((s32) (M2C_FIELD(arg0, s8 *, 0x2F0) + 1) % 2);
                        func_00B91590(0x34, 1);
                        func_0026E840(0x8400F803);
                    }
                } else {
                    M2C_FIELD(arg0, s8 *, 0x2F0) = (s8) ((s32) (M2C_FIELD(arg0, s8 *, 0x2F0) + 1) % 2);
                    func_00B91590(0x34, 1);
                    func_0026E840(0x8400F803);
                }
            } else {
                D_003EB1E4 = 0;
                var_s1 = 2;
                M2C_FIELD(temp_s0, u8 *, 3) = (u8) D_003EB1E8;
                func_0026E840(0x84008401);
            }
        } else {
            temp_a1 = M2C_FIELD(arg0, s8 *, 0x2F0) * 0x28;
            temp_a0_2 = ((M2C_FIELD(arg0, s32 *, 0x2E8) * 0xA) + (M2C_FIELD(arg0, s32 *, 0x2E4) + temp_a1)) & 0xFF;
            if (temp_a0_2 >= 0) {
                if (temp_a0_2 >= 0x59) {
                    var_v0 = 0;
                } else {
                    temp_v0_2 = func_002F7F80(temp_a0_2, temp_a1);
                    if (temp_v0_2 != NULL) {
                        if (*temp_v0_2 != 0) {
                            var_v0 = 1;
                        } else {
                            goto block_26;
                        }
                    } else {
                        goto block_26;
                    }
                }
            } else {
block_26:
                var_v0 = 0;
            }
            if (var_v0 != 0) {
                var_s1 = 1;
                D_003EB1E4 = 0;
                func_00B91590(0x21, 1);
                func_0026E840(0x84028400);
            } else {
                func_0026E840(0x8C008005);
            }
        }
        func_00BC3FB0(3);
        break;
    }
    return var_s1;
}
