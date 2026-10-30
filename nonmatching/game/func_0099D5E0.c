/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002875F0(void *, signed char);
extern char Pes6MatchPlayers[];
extern char D_00591A90[];
extern char D_005A2020[];
extern char D_00CB52A0[];

void func_0099D5E0(void) {
    s32 temp_a7;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 temp_a3;
    u8 temp_t1;
    void *temp_a2;
    void *temp_a5;
    void *temp_a6;
    void *temp_t1_2;
    void *temp_t1_3;
    void *var_a4;
    void *var_s5;

    var_s4 = 0;
    do {
        temp_s1 = (var_s4 & 0xFF) * 0xB;
        temp_s0 = temp_s1 + 2;
        if (temp_s0 == 0xFF) {
            var_a1 = 1;
        } else {
            var_a1 = (temp_s1 % 23) + 2;
        }
        var_s3 = 0;
        var_s5 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
loop_6:
        var_s2 = 1;
loop_7:
        temp_a3 = M2C_FIELD(var_s5, u8 *, 0x12);
        temp_v1 = var_s2 & 0xFF;
        if (M2C_FIELD(var_s5, u8 *, 0x11) == M2C_FIELD((temp_v1 + (((void *)D_00591A90) + (temp_a3 * 0x8B))), u8 *, 7)) {
            temp_a2 = ((void *)D_005A2020) + (temp_a3 * 0x168);
            func_002875F0(var_s5, (s8) M2C_FIELD((temp_a2 + (M2C_FIELD(temp_a2, u8 *, 1) * 0x52) + temp_v1), u8 *, 0x1C));
        }
        var_s2 = (var_s2 + 1) & 0xFF;
        if (var_s2 < 0xB) {
            goto loop_7;
        }
        var_s3 = (var_s3 + 1) & 0xFF;
        var_s5 += 0x240;
        if (var_s3 < 0xA) {
            goto loop_6;
        }
        if (temp_s0 == 0xFF) {
            var_a1_2 = 1;
        } else {
            var_a1_2 = (temp_s1 % 23) + 2;
        }
        var_a3 = 0;
        var_a4 = ((void *)Pes6MatchPlayers) + (var_a1_2 * 0x240);
loop_17:
        temp_t1 = M2C_FIELD(var_a4, u8 *, 0x12);
        var_a2 = 1;
        temp_a6 = ((void *)D_00CB52A0) + (var_a3 & 0xFF) + (temp_t1 * 0x14);
        temp_t1_2 = ((void *)D_005A2020) + (temp_t1 * 0x168);
        temp_t1_3 = temp_t1_2 + (M2C_FIELD(temp_t1_2, u8 *, 1) * 0x52);
loop_18:
        temp_a7 = var_a2 & 0xFF;
        if (M2C_FIELD(var_a4, u8 *, 0x10) != M2C_FIELD((temp_t1_3 + temp_a7), u8 *, 0x1C)) {

        } else {
            temp_a5 = temp_t1_3 + (temp_a7 * 2);
            M2C_FIELD(temp_a6, u8 *, 0x3A4) = (u8) M2C_FIELD(temp_a5, u8 *, 6);
            M2C_FIELD(temp_a6, u8 *, 0x3AE) = (u8) M2C_FIELD(temp_a5, u8 *, 7);
        }
        var_a2 = (var_a2 + 1) & 0xFF;
        if (var_a2 < 0xB) {
            goto loop_18;
        }
        var_a3 = (var_a3 + 1) & 0xFF;
        var_a4 += 0x240;
        if (var_a3 < 0xA) {
            goto loop_17;
        }
        var_s4 = (var_s4 + 1) & 0xFF;
    } while (var_s4 < 2);
}
