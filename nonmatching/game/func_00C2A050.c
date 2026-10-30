/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00277220(void *, M2C_UNK);                 /* extern */
s32 func_0028F230(s32, void *, M2C_UNK, s32 *, s32); /* extern */
s32 func_00292F00(u8);                              /* extern */
s32 func_009A0270();                                /* extern */
s32 func_00C32010(void *, u8);                      /* extern */
extern char Pes6MatchSquads[];
extern char D_00CB3868[];

s32 func_00C2A050(void *arg0, s32 arg1, s32 arg2) {
    u8 *spA0;
    s32 spB0;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 temp_s0;
    s32 var_a4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_a1;
    u8 temp_s1;
    u8 temp_s6;
    u8 temp_s6_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s0_2;
    void *temp_s7;

    var_s3 = -1;
    var_s2 = 0;
    spA0 = ((void *)D_00CB3868);
    spCC = arg2;
    spB0 = 0;
    spD8 = 0x80000;
    spD0 = 0;
    spD4 = 0;
    temp_s7 = ((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0) * 0x6900);
loop_1:
    if ((spB0 < 2) && (var_s3 == -1)) {
        var_s4 = 0;
        do {
            temp_a0 = arg0 + var_s4;
            temp_s1 = M2C_FIELD(temp_a0, u8 *, 0x8C);
            temp_s0 = temp_s1 * 0x348;
            if (M2C_FIELD((temp_s7 + temp_s0), u8 *, 0xD4) == 0) {

            } else {
                temp_s6 = *spA0;
                if (temp_s6 == (func_00292F00(M2C_FIELD(temp_a0, u8 *, 0xC0)) & 0xFF)) {
                    temp_a2 = temp_s7 + temp_s0;
                    var_a4 = (s32) M2C_FIELD(temp_a2, s32 *, 0xD8) / (s32) ((M2C_FIELD(temp_a2, u32 *, 0x18) / 100) + ((u32) M2C_FIELD(temp_a2, u32 *, 0x18) >> 0x1F));
                    if (var_a4 >= 0x3D) {
                        var_a4 = 0x64;
                    }
                    temp_s0_2 = temp_s0 + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0) * 0x6900));
                    var_s1 = func_0028F230(arg1, temp_s0_2 + 0x68, 3, &spD0, var_a4);
                    if (func_00C32010(arg0, temp_s1) == 0) {
                        goto block_17;
                    }
                    if ((M2C_FIELD(temp_s0_2, u8 *, 0xF8) == 0) && (M2C_FIELD(temp_s0_2, u8 *, 0xF9) == 0)) {
                        temp_s6_2 = M2C_FIELD(temp_s0_2, u8 *, 0x102);
                        if (((func_009A0270() & 0xFF) - 5) < (s32) temp_s6_2) {
                            goto block_17;
                        }
                        var_v0 = func_00277220(temp_s0_2 + 0xF0, 1);
                    } else {
block_17:
                        var_v0 = 0;
                    }
                    if (var_v0 != 2) {

                    } else {
                        var_v0_2 = var_s1 >> 1;
                        if (var_s1 < 0) {
                            var_v0_2 = (s32) (var_s1 + 1) >> 1;
                        }
                        var_s1 = var_v0_2;
                    }
                    if (var_s2 < var_s1) {
                        var_s2 = var_s1;
                        var_s3 = var_s4;
                    }
                }
            }
            var_s4 += 1;
        } while (var_s4 < 0xB);
        spA0 += 1;
        spB0 += 1;
        goto loop_1;
    }
    if (var_s3 != -1) {
        temp_a0_2 = var_s3 + arg0;
        temp_a2_2 = spCC + arg0;
        temp_a1 = M2C_FIELD(temp_a2_2, u8 *, 0x8C);
        M2C_FIELD(temp_a2_2, u8 *, 0x8C) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x8C);
        M2C_FIELD(temp_a0_2, u8 *, 0x8C) = temp_a1;
        M2C_FIELD(arg0, s8 *, 0x14) = 1;
        return 1;
    }
    return 0;
}
