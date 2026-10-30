/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_002C7BF0(s32);
extern int func_002DCA50(void);
extern int func_002DCA30(void);
extern s32 func_002C7D30(s32);
M2C_UNK func_00290C00(s32, s32, s32);               /* extern */
M2C_UNK func_009850D0(u8, s32);                     /* extern */
M2C_UNK func_0099D5E0();                            /* extern */
extern char D_00591DD9[];
extern char D_00591E00[];
extern char D_00592800[];
extern char D_005A2020[];
extern char D_00CB52A0[];

void func_00984E90(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s0_2;
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s2;
    M2C_UNK *var_s2_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s3_2;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_v0;

    if (func_002DCA30() == 0) {
        goto block_1;
    }
    if (func_002DCA50() == 0) {
        goto block_4;
    }
block_1:
    if ((*(u8 *)D_00591DD9) != 0) {
        return;
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00592800);
    do {
        if ((func_002C7BF0(var_s1) & 0xFF) != 2) {
            temp_a0 = M2C_FIELD(var_s0, u8 *, 0x15B);
            if ((s32) temp_a0 >= 8) {
                if (func_002C7D30(var_s1) == 0) {
                    var_s3 = 0;
                    var_s2 = ((void *)D_00592800);
                    do {
                        temp_a0_2 = M2C_FIELD(var_s2, u8 *, 0);
                        if (((s32) temp_a0_2 < 8) && (var_s1 == M2C_FIELD(var_s2, u8 *, 1))) {
                            func_009850D0(temp_a0_2, var_s1 & 0xFF);
                        }
                        var_s3 += 1;
                        var_s2 += 0x28;
                    } while (var_s3 < 8);
                }
            } else {
                func_009850D0(temp_a0, var_s1 & 0xFF);
            }
        }
        var_s1 += 1;
        var_s0 += 1;
    } while (var_s1 < 2);
block_4:
    var_s3_2 = 0;
    var_s2_2 = ((void *)D_00CB52A0);
    var_s1_2 = ((void *)D_00591E00);
    var_s0_2 = ((void *)D_005A2020);
    do {
        var_a2 = 0;
loop_6:
        temp_v0 = var_s2_2 + var_a2;
        M2C_FIELD(temp_v0, u8 *, 0x1F) = 0U;
        if (!(M2C_FIELD(var_s1_2, u8 *, 0xF2) & (1 << var_a2))) {

        } else {
            M2C_FIELD(temp_v0, u8 *, 0x1F) = (u8) M2C_FIELD((var_s0_2 + var_a2), u8 *, 0x150);
        }
        var_a2 += 1;
        if (var_a2 < 4) {
            goto loop_6;
        }
        M2C_FIELD(var_s0_2, s8 *, 1) = 0;
        var_a1 = 0;
loop_10:
        if ((M2C_FIELD((var_s2_2 + var_a1), u8 *, 0x1F) == 0xB) && (M2C_FIELD(var_s0_2, u8 *, 0xAB) != 0)) {
            M2C_FIELD(var_s0_2, s8 *, 1) = 2;
        }
        var_a1 += 1;
        if (var_a1 < 4) {
            goto loop_10;
        }
        var_a1_2 = 0;
loop_15:
        if ((M2C_FIELD((var_s2_2 + var_a1_2), u8 *, 0x1F) == 0xA) && (M2C_FIELD(var_s0_2, u8 *, 0x59) != 0)) {
            M2C_FIELD(var_s0_2, s8 *, 1) = 1;
        }
        var_a1_2 += 1;
        if (var_a1_2 < 4) {
            goto loop_15;
        }
        func_00290C00(var_s3_2, var_a1_2, var_a2);
        var_s3_2 += 1;
        var_s2_2 += 4;
        var_s1_2 += 1;
        var_s0_2 += 0x168;
    } while (var_s3_2 < 2);
    func_0099D5E0();
}
