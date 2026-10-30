/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u32 func_00B4DFD0(void);
extern s32 func_00B03B10(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B4D3B0(s32, u8);                     /* extern */
s32 func_00B4DC40(s32);                             /* extern */
s8 func_00B4DD40();                                 /* extern */
s32 func_00B4DE90(u8);                              /* extern */
s32 func_00B4DF50(u8);                              /* extern */

s32 func_00B4C1D0(void) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s8 temp_s0;
    u32 temp_v0;
    u8 temp_s2;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v0_3;
    u8 var_v0_4;
    void *temp_a1;
    void *var_v0_2;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x34C) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x34D);
            switch (temp_v1) {                      /* irregular */
            case 0:
                temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x350);
                if (temp_v1_2 != 8) {
                    if (M2C_FIELD((temp_v1_2 + temp_v0), u8 *, 0x3E4) == 0xFF) {
                        M2C_FIELD(temp_v0, u8 *, 0x34D) = 1U;
                        M2C_FIELD(temp_v0, u8 *, 0x34C) = 2U;
                        func_00958000(0x50);
                    } else {
                        func_0026E840(0x8C008005);
                    }
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0x34C) = 0xDU;
                    func_00958000(0xA1);
                }
                break;
            case 1:
                func_00B4DD40();
                temp_s0 = func_00B4DD40();
                if (M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0x350) + temp_v0), u8 *, 0x3E4) == 0xFF) {
                    if ((temp_s0 >= 0x48) && (M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x1B8) == 1)) {
                        var_v0 = 3;
                        goto block_65;
                    }
                    if ((temp_s0 < 0x48) && (M2C_FIELD((M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x128) + temp_v0), u8 *, 0x1B8) == 1)) {
                        var_v0 = 3;
                        goto block_65;
                    }
                    if ((temp_s0 < 0x48) && (temp_s2 = M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x128), (temp_s2 == (func_00225820() & 0xFF)))) {
                        func_0026E840(0x8C008005);
                    } else if ((temp_s0 >= 0x48) && (func_00B4DC40(temp_s0 & 0xFF) == 0)) {
                        func_0026E840(0x8C008005);
                    } else if ((temp_s0 < 0x48) && ((func_00B03B10((s32) M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x128)) & 0xFF) < 0x10)) {
                        func_0026E840(0x8C008005);
                    } else if ((temp_s0 < 0x48) && (func_00B4DF50(M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x128)) == 1)) {
                        func_0026E840(0x8C008005);
                    } else {
                        if (temp_s0 < 0x48) {
                            temp_a1 = temp_s0 + temp_v0;
                            M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0x350) + temp_v0), u8 *, 0x3E4) = (u8) M2C_FIELD(temp_a1, u8 *, 0x128);
                            var_v0_2 = M2C_FIELD(temp_a1, u8 *, 0x128) + temp_v0;
                        } else {
                            var_v0_2 = temp_s0 + temp_v0;
                            M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0x350) + temp_v0), s8 *, 0x3E4) = temp_s0;
                        }
                        M2C_FIELD(var_v0_2, s8 *, 0x1B8) = 1;
                        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x350);
                        func_00B4D3B0(temp_v0_2 & 0xFF, M2C_FIELD((temp_v0_2 + temp_v0), u8 *, 0x3E4));
                        temp_v0_3 = func_00B4DE90((u8) M2C_FIELD(temp_v0, s32 *, 0x350));
                        if (temp_v0_3 >= 0) {
                            M2C_FIELD(temp_v0, s32 *, 0x350) = (s32) (temp_v0_3 & 0xFF);
                            func_00958000(0x51);
                        } else {
                            M2C_FIELD(temp_v0, s32 *, 0x350) = 8;
                            func_00958000(0x51);
                        }
                        var_v0_3 = temp_s0 & 0xF;
                        if ((temp_s0 < 0) && (var_v0_3 != 0)) {
                            var_v0_3 -= 0x10;
                        }
                        M2C_FIELD(temp_v0, u8 *, 0x3EC) = var_v0_3;
                        temp_v1_3 = M2C_FIELD(temp_v0, s32 *, 0x990);
                        if (temp_v1_3 != 5) {
                            if ((temp_v1_3 >= 4) && ((s32) M2C_FIELD(temp_v0, u8 *, 0x3EC) >= 8)) {
                                var_v0_4 = 7;
                                goto block_63;
                            }
                        } else {
                            var_v0_4 = temp_s0 - 0x48;
block_63:
                            M2C_FIELD(temp_v0, u8 *, 0x3EC) = var_v0_4;
                        }
                        M2C_FIELD(temp_v0, u8 *, 0x34D) = 0U;
                        var_v0 = 1;
                        goto block_65;
                    }
                } else {
                    var_v0 = 3;
block_65:
                    M2C_FIELD(temp_v0, u8 *, 0x34C) = var_v0;
                }
                break;
            }
        }
    }
    return 0;
}
