/* compiler: mwcc-3.0.1b151 */
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
    char *var_s0;
    char *var_s0_2;
    char *var_s1_2;
    char *var_s2;
    char *var_s2_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s3_2;
    u8 temp_a0;
    u8 temp_a0_2;
    char *temp_v0;

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
    var_s0 = D_00592800;
    do {
        if ((func_002C7BF0(var_s1) & 0xFF) != 2) {
            temp_a0 = *(u8 *)(var_s0 + 0x15B);
            if ((s32) temp_a0 >= 8) {
                if (func_002C7D30(var_s1) == 0) {
                    var_s3 = 0;
                    var_s2 = D_00592800;
                    do {
                        temp_a0_2 = *(u8 *)var_s2;
                        if (((s32) temp_a0_2 < 8) && (var_s1 == *(u8 *)(var_s2 + 1))) {
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
    var_s2_2 = D_00CB52A0;
    var_s1_2 = D_00591E00;
    var_s0_2 = D_005A2020;
    do {
        var_a2 = 0;
        do {
            temp_v0 = var_s2_2 + var_a2;
            *(u8 *)(temp_v0 + 0x1F) = 0;
            if (*(u8 *)(var_s1_2 + 0xF2) & (1 << var_a2)) {
                *(u8 *)(temp_v0 + 0x1F) = *(u8 *)(var_s0_2 + var_a2 + 0x150);
            }
            var_a2 += 1;
        } while (var_a2 < 4);
        *(s8 *)(var_s0_2 + 1) = 0;
        var_a1 = 0;
        do {
            if ((*(u8 *)(var_s2_2 + var_a1 + 0x1F) == 0xB) && (*(u8 *)(var_s0_2 + 0xAB) != 0)) {
                *(s8 *)(var_s0_2 + 1) = 2;
            }
            var_a1 += 1;
        } while (var_a1 < 4);
        var_a1_2 = 0;
        do {
            if ((*(u8 *)(var_s2_2 + var_a1_2 + 0x1F) == 0xA) && (*(u8 *)(var_s0_2 + 0x59) != 0)) {
                *(s8 *)(var_s0_2 + 1) = 1;
            }
            var_a1_2 += 1;
        } while (var_a1_2 < 4);
        func_00290C00(var_s3_2, var_a1_2, var_a2);
        var_s3_2 += 1;
        var_s2_2 += 4;
        var_s1_2 += 1;
        var_s0_2 += 0x168;
    } while (var_s3_2 < 2);
    func_0099D5E0();
}
