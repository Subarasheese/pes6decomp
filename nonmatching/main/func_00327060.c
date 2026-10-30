/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

s32 func_00327060(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK arg4, void *arg5) {
    s32 temp_a7_2;
    s32 temp_t2_2;
    s32 temp_v0;
    s32 var_a4;
    s32 var_a6;
    s32 var_a7;
    s32 var_t2;
    s32 var_t9;
    s32 var_v0;
    u16 temp_a7;
    u16 temp_t2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;
    void *var_a2;
    void *var_a3;
    void *var_a5;
    void *var_t1;
    void *var_t8;

    var_a5 = arg5;
    temp_v0 = arg1 & 0xFF;
    var_a4 = 0;
    temp_v1 = arg0 + (temp_v0 << 0xA);
    var_a3 = ((void *)Pes6MatchSquads) + (temp_v0 * 0x6900);
    var_a2 = var_a3;
    do {
        temp_t2 = M2C_FIELD(var_a2, u16 *, 0x46);
        var_t9 = 0;
        var_t8 = temp_v1;
loop_2:
        if ((M2C_FIELD(var_t8, u16 *, 0xC8) == temp_t2) && (temp_t2 != 0)) {
            var_a6 = 1;
            var_a5 = temp_v1 + (var_t9 << 5) + 0xC8;
        } else {
            var_t9 += 1;
            var_t8 += 0x20;
            if (var_t9 >= 0x20) {
                var_a6 = 0;
            } else {
                goto loop_2;
            }
        }
        if (var_a6 != 0) {
            temp_t2_2 = M2C_FIELD(var_a5, s32 *, 0x1C);
            if (temp_t2_2 & 0x60000000) {
                M2C_FIELD(var_a5, s32 *, 0x1C) = (s32) (temp_t2_2 | 0x80000000);
            }
            M2C_FIELD(var_a5, s32 *, 0x1C) = (s32) (M2C_FIELD(var_a5, s32 *, 0x1C) & 0x9FFFFFFF);
        }
        var_a4 += 1;
        var_a2 += 0x348;
    } while (var_a4 < 0x20);
    temp_v1_2 = arg0 + (temp_v0 << 0xA);
    var_v0 = 0;
    var_a0 = ((void *)Pes6MatchSquads) + ((arg1 & 0xFF) * 0x6900);
    do {
        temp_a7 = M2C_FIELD(var_a3, u16 *, 0x46);
        var_t2 = 0;
        var_t1 = temp_v1_2;
loop_14:
        if ((M2C_FIELD(var_t1, u16 *, 0xC8) == temp_a7) && (temp_a7 != 0)) {
            var_a7 = 1;
            var_a5 = temp_v1_2 + (var_t2 << 5) + 0xC8;
        } else {
            var_t2 += 1;
            var_t1 += 0x20;
            if (var_t2 >= 0x20) {
                var_a7 = 0;
            } else {
                goto loop_14;
            }
        }
        if ((var_a7 != 0) && (M2C_FIELD(var_a0, s32 *, 0x104) != 0)) {
            temp_a7_2 = M2C_FIELD(var_a5, s32 *, 0x1C);
            if (!(temp_a7_2 & 0x80000000)) {
                if (M2C_FIELD(var_a0, u8 *, 0x102) != 0) {
                    M2C_FIELD(var_a5, s32 *, 0x1C) = (s32) (temp_a7_2 | 0x40000000);
                }
                if (M2C_FIELD(var_a0, s32 *, 0x110) != 0) {
                    M2C_FIELD(var_a5, s32 *, 0x1C) = (s32) (M2C_FIELD(var_a5, s32 *, 0x1C) | 0x20000000);
                }
            }
        }
        var_v0 += 1;
        var_a3 += 0x348;
        var_a0 += 0x348;
    } while (var_v0 < 0x20);
    return 1;
}
