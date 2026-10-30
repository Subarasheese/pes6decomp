/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_008FA320(M2C_UNK *);                   /* extern */
M2C_UNK func_008FA6E0(M2C_UNK *, s8 *, s8 *, s32, s32, s32); /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
extern M2C_UNK *D_003EA638;
extern char D_00921C80[];
extern char D_00CB3300[];

void func_008FAAD0(void) {
    s8 sp90;
    s8 sp198;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_s7;
    s32 var_a0;
    s32 var_s0;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_s2;
    s8 *var_s3;
    s8 *var_s4;
    s8 *var_v1;
    s8 *var_v1_2;
    s8 *var_v1_3;

    var_v0 = 0x100;
    var_v1 = &sp90;
    var_s6 = 0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_v1_2 = &sp198;
    var_v0_2 = 8;
    if (var_v1_2 != NULL) {
        do {
            *var_v1_2 = 0;
            var_v0_2 -= 1;
            var_v1_2 += 1;
        } while (var_v0_2 != 0);
    }
    var_s0 = 0;
    var_s4 = &sp90;
    D_003EA638 = ((void *)D_00921C80);
    var_s3 = &sp198;
    temp_s7 = (*(s32 *)D_00CB3300);
    do {
        var_s5 = 0;
        var_s2 = var_s4;
loop_6:
        temp_a0 = func_00C17E10(var_s0 & 0xFF, var_s5 & 0xFF) & 0xFF;
        if (temp_a0 != 0xFF) {
            temp_v1 = M2C_FIELD((temp_s7 + ((var_s0 & 0xFF) * 0x2F4) + (temp_a0 * 0x28)), s16 *, 0x2C);
            *var_s2 = (s32) temp_v1;
            if (temp_v1 > 0) {
                *var_s3 = (s32) (*var_s3 + 1);
            }
        }
        var_s5 += 1;
        var_s2 += 4;
        if (var_s5 < 0x20) {
            goto loop_6;
        }
        var_s0 += 1;
        var_s4 += 0x80;
        var_s3 += 4;
    } while (var_s0 < 2);
    var_a0 = 0;
    var_v1_3 = &sp90;
    do {
        var_a0 += 8;
        temp_a5 = var_s6 + M2C_FIELD(var_v1_3, s32 *, 0) + M2C_FIELD(var_v1_3, s32 *, 0x80) + M2C_FIELD(var_v1_3, s32 *, 4) + M2C_FIELD(var_v1_3, s32 *, 0x84) + M2C_FIELD(var_v1_3, s32 *, 8) + M2C_FIELD(var_v1_3, s32 *, 0x88) + M2C_FIELD(var_v1_3, s32 *, 0xC) + M2C_FIELD(var_v1_3, s32 *, 0x8C) + M2C_FIELD(var_v1_3, s32 *, 0x10) + M2C_FIELD(var_v1_3, s32 *, 0x90) + M2C_FIELD(var_v1_3, s32 *, 0x14) + M2C_FIELD(var_v1_3, s32 *, 0x94) + M2C_FIELD(var_v1_3, s32 *, 0x18);
        temp_a4 = temp_a5 + M2C_FIELD(var_v1_3, s32 *, 0x98);
        temp_a3 = temp_a4 + M2C_FIELD(var_v1_3, s32 *, 0x1C);
        var_s6 = temp_a3 + M2C_FIELD(var_v1_3, s32 *, 0x9C);
        var_v1_3 += 0x20;
    } while (var_a0 < 0x20);
    if (var_s6 != 0) {
        func_008FA6E0(((void *)D_00921C80), &sp198, &sp90, temp_a3, temp_a4, temp_a5);
        func_008FA320(((void *)D_00921C80));
    }
}
