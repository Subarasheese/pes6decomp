/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern void *D_003E7A08;
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591DC4[];

s32 func_00992EF0(void) {
    s32 temp_a3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a2;
    void *temp_a2_2;
    void *temp_s0;
    void *var_a3;

    temp_a0 = M2C_FIELD(D_003E7A08, u8 *, 8);
    if (temp_a0 == 0) {
        return 0;
    }
    var_s2 = 0;
    var_s1 = 0;
    if (temp_a0 != 0xFF) {
        var_a1 = (s32) temp_a0 % 23;
    } else {
        var_a1 = 1;
    }
    var_v1 = 0;
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
    var_a3 = D_003E7A08;
loop_7:
    temp_a2 = M2C_FIELD(var_a3, u8 *, 8);
    if ((temp_a2 != 0) && (temp_a2 != 0xFF) && (temp_a2 != M2C_FIELD(temp_s0, u8 *, 0))) {
        temp_a3 = var_v1 << 6;
        temp_a2_2 = temp_a3 + D_003E7A08;
        if (M2C_FIELD(temp_a2_2, s32 *, 4) == 1) {
            temp_a1 = M2C_FIELD(temp_a2_2, u8 *, 0x25);
            if ((temp_a1 != 1) && (temp_a1 != 4)) {

            } else {
                var_a1_2 = M2C_FIELD((temp_a3 + D_003E7A08), s32 *, 0x1C) - (*(s32 *)D_00591DC4);
                if (var_a1_2 <= 0) {
                    var_a1_2 = -var_a1_2;
                }
                if (var_a1_2 < (s32) (*(u8 *)D_00591BE4)) {
                    var_s2 = 1;
                }
            }
        }
    } else {
        var_v1 += 1;
        var_a3 += 0x40;
        if (var_v1 >= 0xA) {

        } else {
            goto loop_7;
        }
    }
    if (M2C_FIELD(D_003E7A08, s32 *, 4) == 4) {
        if ((func_009B3070((s32) M2C_FIELD(((var_v1 << 6) + D_003E7A08), u16 *, 0x26), (s32) M2C_FIELD(temp_s0, u16 *, 0x2A)) & 0xFFFF) >= 0x4001) {
            var_s1 = 1;
        }
    }
    if ((var_s1 != 0) && ((func_009B3070((s32) M2C_FIELD(temp_s0, u16 *, 0x2A), (s32) M2C_FIELD(temp_s0, u16 *, 0x26)) & 0xFFFF) < 0x2000)) {
        return (var_s2 == 0) ? 2 : 1;
    }
    return 0;
}
