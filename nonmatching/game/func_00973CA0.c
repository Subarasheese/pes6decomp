/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BDB730(u8 *);                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_005900B0[];
extern char D_00CB52A0[];

void func_00973CA0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_t2;
    s32 temp_a6;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t3;
    u8 *var_s4;
    u8 temp_a0;
    u8 temp_a4;
    void *temp_a5;
    void *temp_v1;

    var_s3 = 0;
    var_s0 = ((void *)D_00CB52A0);
    do {
        var_s1 = 0;
        if (var_s3 == 0) {
            var_s4 = ((void *)D_0058E7F0);
        } else {
            var_s4 = ((void *)D_005900B0);
        }
        var_s2 = 0;
loop_6:
        if (func_00BDB730(var_s4) != 0) {
            temp_v1 = var_s0 + var_s1;
            var_s1 += 1;
            M2C_FIELD(temp_v1, u8 *, 0x41C) = (u8) *var_s4;
        }
        var_s2 += 1;
        var_s4 += 0x240;
        if (var_s2 < 0xB) {
            goto loop_6;
        }
        if (var_s1 < 0xB) {
            do {
                M2C_FIELD((var_s0 + var_s1), s8 *, 0x41C) = 0xFF;
                var_s1 += 1;
            } while (var_s1 < 0xB);
        }
        var_s3 += 1;
        var_s0 += 0xB;
    } while (var_s3 < 2);
    var_t1 = 0;
    var_t2 = ((void *)D_00CB52A0);
    do {
        var_t0 = 0;
loop_18:
        temp_a6 = 0xA - var_t0;
        var_t3 = 0;
        if (temp_a6 > 0) {
loop_19:
            temp_a5 = var_t2 + var_t3;
            temp_a4 = M2C_FIELD(temp_a5, u8 *, 0x41D);
            if (temp_a4 != 0xFF) {
                if (temp_a4 == 0xFF) {
                    var_s3_2 = 1;
                } else {
                    var_s3_2 = (s32) temp_a4 % 23;
                }
                temp_a0 = M2C_FIELD(temp_a5, u8 *, 0x41C);
                if (temp_a0 == 0xFF) {
                    var_s2_2 = 1;
                } else {
                    var_s2_2 = (s32) temp_a0 % 23;
                }
                if ((u32) M2C_FIELD((((void *)Pes6MatchPlayers) + (var_s3_2 * 0x240)), u32 *, 0x110) < (u32) M2C_FIELD((((void *)Pes6MatchPlayers) + (var_s2_2 * 0x240)), u32 *, 0x110)) {
                    M2C_FIELD(temp_a5, u8 *, 0x41C) = temp_a4;
                    M2C_FIELD(temp_a5, u8 *, 0x41D) = temp_a0;
                }
                var_t3 += 1;
                if (var_t3 < temp_a6) {
                    goto loop_19;
                }
            }
        }
        var_t0 += 1;
        if (var_t0 < 0xA) {
            goto loop_18;
        }
        var_t1 += 1;
        var_t2 += 0xB;
    } while (var_t1 < 2);
}
