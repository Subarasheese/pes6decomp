/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090B8B0(void *, M2C_UNK);                 /* extern */
s32 func_00984600(s32);                             /* extern */
s32 func_00BDB730(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591C09[];
extern char D_00591E4D[];
extern char Pes6MatchSquads[];
extern char D_00CBBE10[];

void func_00984760(s32 arg0, s32 arg1) {
    s32 sp80;
    M2C_UNK *var_a0;
    M2C_UNK *var_a3;
    M2C_UNK *var_s3;
    M2C_UNK *var_s3_2;
    M2C_UNK *var_t1;
    s32 *var_a1;
    s32 *var_s2;
    s32 *var_s2_2;
    s32 *var_t0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a5;
    s32 temp_s6;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a7;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4_2;
    s32 var_t2;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_a3;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a1_2;
    void *temp_s6_2;
    void *var_s4;

    var_a2 = 0;
    temp_s6 = (arg1 & 0xFF) ? 0xD : 2;
    var_a0 = ((void *)D_00CBBE10);
    var_a1 = &sp80;
    do {
        M2C_FIELD(var_a1, s32 *, 0) = 0;
        var_a2 += 5;
        M2C_FIELD(var_a0, s8 *, 0x11) = 0xFF;
        M2C_FIELD(var_a1, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s8 *, 0x12) = 0xFF;
        M2C_FIELD(var_a1, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s8 *, 0x13) = 0xFF;
        M2C_FIELD(var_a1, s32 *, 0xC) = 0;
        M2C_FIELD(var_a0, s8 *, 0x14) = 0xFF;
        M2C_FIELD(var_a1, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0, s8 *, 0x15) = 0xFF;
        var_a1 += 0x14;
        var_a0 += 5;
    } while (var_a2 < 0xA);
    if (temp_s6 == 0xFF) {
        var_a0_2 = 1;
    } else {
        var_a0_2 = temp_s6 % 23;
    }
    var_s0 = 0;
    var_s3 = ((void *)D_00CBBE10);
    var_s4 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
    var_s2 = &sp80;
    do {
        if ((func_00BDB730(var_s4) != 0) && (((*(u8 *)D_00591C09) != 5) || (M2C_FIELD(var_s4, u8 *, 0) != (*(u8 *)D_00591E4D)))) {
            M2C_FIELD(var_s3, u8 *, 0x11) = (u8) M2C_FIELD(var_s4, u8 *, 0);
            var_s3 += 1;
            *var_s2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(var_s4, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s4, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            var_s2 += 4;
        }
        var_s0 += 1;
        var_s4 += 0x240;
    } while (var_s0 < 0xA);
    var_s4_2 = func_00984600(temp_s6 & 0xFF) & 0xFF;
    var_s0_2 = 0;
    var_s3_2 = ((void *)D_00CBBE10);
    var_s2_2 = &sp80;
loop_13:
    temp_a0 = M2C_FIELD(var_s3_2, u8 *, 0x11);
    if (temp_a0 != 0xFF) {
        if (temp_a0 == 0xFF) {
            var_a0_3 = 1;
        } else {
            var_a0_3 = (s32) temp_a0 % 23;
        }
        temp_s6_2 = ((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240);
        if (!(func_0090B8B0(temp_s6_2, 1) & 0xFF)) {
            *var_s2_2 += 0x14;
        }
        temp_v1 = M2C_FIELD(temp_s6_2, u8 *, 0x10);
        if ((s32) temp_v1 < 0x1D) {
            if ((s32) temp_v1 >= 0xA) {
                var_v1 = *var_s2_2 + 0x32;
                goto block_28;
            }
            if ((s32) temp_v1 < 8) {
                temp_a0_2 = *var_s2_2;
                var_v1 = temp_a0_2 >> 1;
                if (temp_a0_2 < 0) {
                    var_v1 = (s32) (temp_a0_2 + 1) >> 1;
                }
                goto block_28;
            }
        } else if (var_s4_2 != 0) {
            var_s4_2 -= 1;
            var_v1 = *var_s2_2 + 0x64;
block_28:
            *var_s2_2 = var_v1;
        }
        var_s0_2 += 1;
        var_s3_2 += 1;
        var_s2_2 += 4;
        if (var_s0_2 < 0xA) {
            goto loop_13;
        }
    }
    var_a7 = 0;
    do {
        temp_a5 = 9 - var_a7;
        var_t2 = 0;
        if (temp_a5 > 0) {
            var_t1 = ((void *)D_00CBBE10);
            var_t0 = &sp80;
loop_33:
            temp_a3 = M2C_FIELD(var_t1, u8 *, 0x12);
            if (temp_a3 != 0xFF) {
                temp_a1 = M2C_FIELD(var_t0, s32 *, 4);
                temp_a0_3 = M2C_FIELD(var_t0, s32 *, 0);
                if (temp_a0_3 < temp_a1) {
                    temp_v1_2 = M2C_FIELD(var_t1, u8 *, 0x11);
                    M2C_FIELD(var_t0, s32 *, 0) = temp_a1;
                    M2C_FIELD(var_t0, s32 *, 4) = temp_a0_3;
                    M2C_FIELD(var_t1, u8 *, 0x11) = temp_a3;
                    M2C_FIELD(var_t1, u8 *, 0x12) = temp_v1_2;
                }
                var_t2 += 1;
                var_t1 += 1;
                var_t0 += 4;
                if (var_t2 >= temp_a5) {

                } else {
                    goto loop_33;
                }
            }
        }
        var_a7 += 1;
    } while (var_a7 < 9);
    var_a2_2 = 0;
    var_a3 = ((void *)D_00CBBE10);
    do {
        temp_a1_2 = arg0 + var_a2_2;
        var_a2_2 += 5;
        M2C_FIELD(temp_a1_2, u8 *, 0) = (u8) M2C_FIELD(var_a3, u8 *, 0x11);
        M2C_FIELD(temp_a1_2, u8 *, 1) = (u8) M2C_FIELD(var_a3, u8 *, 0x12);
        M2C_FIELD(temp_a1_2, u8 *, 2) = (u8) M2C_FIELD(var_a3, u8 *, 0x13);
        M2C_FIELD(temp_a1_2, u8 *, 3) = (u8) M2C_FIELD(var_a3, u8 *, 0x14);
        M2C_FIELD(temp_a1_2, u8 *, 4) = (u8) M2C_FIELD(var_a3, u8 *, 0x15);
        var_a3 += 5;
    } while (var_a2_2 < 0xA);
}
