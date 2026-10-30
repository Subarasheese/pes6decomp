/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099D850(void *, M2C_UNK);                 /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E00[];
extern char Pes6MatchSquads[];
extern char D_00CB52A0[];

void func_00904E20(void) {
    s32 temp_s0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_a2;
    void *temp_v1_4;
    void *var_s5;

    var_s6 = 0;
    do {
        var_s3 = 0;
        var_s1 = 0;
        temp_s0 = (var_s6 & 0xFF) * 0xB;
        var_s2 = 0;
        if ((temp_s0 + 1) != 0xFF) {
            var_a0 = (temp_s0 % 23) + 1;
        } else {
            var_a0 = 1;
        }
        var_s4 = 0;
        var_s5 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
loop_5:
        if (func_00BDB8B0(var_s5) != 0) {
            temp_v1 = M2C_FIELD(var_s5, u8 *, 0x10);
            if (temp_v1 != 0) {
                if ((s32) temp_v1 >= 8) {
                    if ((s32) temp_v1 < 0xA) {
                        var_s3 = (var_s3 + 1) & 0xFF;
                        var_s1 += M2C_FIELD(var_s5, u8 *, 0x5C);
                        if (!(func_0099D850(var_s5, 4) & 0xFF)) {
                            var_s1 += 0x14;
                        }
                    }
                } else {
                    var_s3 = (var_s3 + 1) & 0xFF;
                    if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(var_s5, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s5, u8 *, 0x12) * 0x6900))), u8 *, 0x86) << 0x3A) >> 0x3F) != 0) {
                        var_s2 = 1;
                    }
                    if (!(func_0099D850(var_s5, 1) & 0xFF)) {
                        if (!(func_0099D850(var_s5, 2) & 0xFF) && !(func_0099D850(var_s5, 3) & 0xFF)) {
                            var_s1 += 0x46;
                        }
                    }
                    var_s1 += M2C_FIELD(var_s5, u8 *, 0x5C);
                }
            } else if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(var_s5, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s5, u8 *, 0x12) * 0x6900))), u8 *, 0x86) << 0x3A) >> 0x3F) != 0) {
                var_s2 = 1;
            }
        }
        var_s4 = (var_s4 + 1) & 0xFF;
        var_s5 += 0x240;
        if (var_s4 < 0xB) {
            goto loop_5;
        }
        temp_v1_2 = var_s3 & 0xFF;
        if (temp_v1_2 != 0) {
            var_s1_2 = var_s1 / temp_v1_2;
            if ((temp_s0 + 2) == 0xFF) {
                var_a0_2 = 1;
            } else {
                var_a0_2 = (temp_s0 % 23) + 2;
            }
            temp_a2 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
            temp_a1 = M2C_FIELD(temp_a2, u8 *, 0x12);
            temp_a0 = M2C_FIELD((((void *)D_00591E00) + temp_a1), u8 *, 0xEE);
            switch (temp_a0) {                      /* irregular */
            case 2:
                var_s1_2 += 0x14;
                break;
            case 1:
                var_s1_2 += 0x28;
                break;
            default:
                var_s2 = (temp_a0 == 0) ? 0 : var_s2;
                break;
            }
            temp_v1_3 = ((var_s2 & 0xFF) * 0x28) + 0x3B;
            if (var_s1_2 < temp_v1_3) {
                M2C_FIELD((((void *)D_00CB52A0) + temp_a1), s8 *, 0x6B) = (s8) (temp_v1_3 - var_s1_2);
            } else {
                M2C_FIELD((((void *)D_00CB52A0) + temp_a1), s8 *, 0x6B) = 0;
            }
            temp_v1_4 = ((void *)D_00CB52A0) + M2C_FIELD(temp_a2, u8 *, 0x12);
            if ((s32) M2C_FIELD(temp_v1_4, u8 *, 0x6B) >= 0x64) {
                M2C_FIELD(temp_v1_4, u8 *, 0x6B) = 0x63U;
            }
        }
        var_s6 = (var_s6 + 1) & 0xFF;
    } while (var_s6 < 2);
}
