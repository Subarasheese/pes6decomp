/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_00BCAAB0();                                /* extern */
s16 func_00BCAB40(u8 *, s32, u8);                   /* extern */
s8 func_00BCBAF0(u8 *, s32, u8);                    /* extern */
extern s32 D_003E758C;
extern char D_00CBAA02[];
extern char D_00CBAA04[];
extern char D_00CBD311[];
extern char D_00CBD3B9[];

void func_00BCA880(void *arg0) {
    s32 temp_a1;
    s32 var_a3;
    s32 var_a4;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 var_v1;
    u8 *temp_a0;
    u8 temp_s0;
    void *var_a1;

    M2C_FIELD(arg0, s16 *, 0) = 0x12C;
    M2C_FIELD(arg0, u16 *, 2) = 0x12CU;
    M2C_FIELD(arg0, s16 *, 4) = 0x12C;
    if (M2C_FIELD((((*(u16 *)D_00CBAA02) * 0x354) + D_003E758C), s16 *, 0x348) > 0) {
        M2C_FIELD(arg0, s32 *, 8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if (((*(u16 *)D_00CBAA04) == 0) && ((s32) (*(u16 *)D_00CBAA04) < (s32) (*(u16 *)D_00CBAA02))) {
        temp_a1 = (*(u8 *)D_00CBD311) * 0x34;
        temp_a0 = ((void *)D_00CBD3B9) + temp_a1;
        temp_s0 = *temp_a0;
        if ((temp_s0 != 0x14) && (temp_s0 != 0x13) && (temp_s0 != 0xD) && (temp_s0 != 0xC) && (temp_s0 != 0xB) && (temp_s0 != 0xA) && (temp_s0 != 9)) {
            M2C_FIELD(arg0, s16 *, 4) = func_00BCAB40(temp_a0, temp_a1, (*(u8 *)D_00CBD311));
            if (temp_s0 == 0x15) {
                if (M2C_FIELD((((*(u16 *)D_00CBAA02) * 0x354) + D_003E758C), u8 *, 0x34E) != 4) {
                    var_a3 = (*(u16 *)D_00CBAA02) - 1;
                    var_a4 = 0x12C;
                    if (var_a3 >= 0) {
                        var_a1 = D_003E758C + (var_a3 * 0x354);
loop_21:
                        if (M2C_FIELD(var_a1, u8 *, 0x34E) == 4) {
                            var_a4 = (var_a3 + 1) & 0xFFFF;
                        } else {
                            var_a3 -= 1;
                            var_a1 -= 0x354;
                            if (var_a3 < 0) {

                            } else {
                                goto loop_21;
                            }
                        }
                    }
                    var_v1 = var_a4 & 0xFFFF;
                } else {
                    var_v1 = 0x12C;
                }
                M2C_FIELD(arg0, u16 *, 2) = var_v1;
                temp_a0_2 = M2C_FIELD(arg0, u16 *, 2);
                if (((s32) temp_a0_2 >= 0x14) && ((s32) temp_a0_2 < 0x12C)) {
                    M2C_FIELD(arg0, s16 *, 0) = (s16) (temp_a0_2 - 0x14);
                }
            } else {
                M2C_FIELD(arg0, u16 *, 2) = func_00BCAAB0();
                temp_a0_3 = M2C_FIELD(arg0, u16 *, 2);
                if ((s32) temp_a0_3 < 0x12C) {
                    if ((s32) temp_a0_3 >= 0x14) {
                        M2C_FIELD(arg0, s16 *, 0) = (s16) (temp_a0_3 - 0x14);
                    } else {
                        goto block_13;
                    }
                }
            }
        } else {
            if ((u32) (temp_s0 - 0x13) < 2U) {
                M2C_FIELD(arg0, s8 *, 6) = func_00BCBAF0(temp_a0, temp_a1, (*(u8 *)D_00CBD311));
            }
block_13:
            M2C_FIELD(arg0, s16 *, 0) = 0;
        }
    }
}
