/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098F300(void *, f32, f32);                /* extern */
s32 func_00992DF0(u8, f32, f32);                    /* extern */
extern void *D_003E7A08;
extern char Pes6MatchPlayers[];

s32 func_00993090(void) {
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    u8 temp_v1;
    void *temp_a0;
    void *temp_s0;

    temp_v1 = M2C_FIELD(D_003E7A08, u8 *, 8);
    if ((temp_v1 != 0) && (temp_v1 != 0xFF)) {
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) temp_v1 % 23;
        }
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if ((func_00992DF0(M2C_FIELD(temp_s0, u8 *, 0x13), M2C_FIELD(temp_s0, f32 *, 0xE0), M2C_FIELD(temp_s0, f32 *, 0xE8)) & 0xFF) == 2) {
            var_s2 = 0;
            var_s1 = 0;
loop_8:
            temp_a0 = D_003E7A08 + var_s1;
            if ((M2C_FIELD(temp_a0, u8 *, 8) == M2C_FIELD(temp_s0, u8 *, 0)) && (M2C_FIELD(temp_a0, s32 *, 4) == 4)) {
                if (func_0098F300(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x10), M2C_FIELD(temp_a0, f32 *, 0x18)) == 0) {
                    return 1;
                }
                var_s2 += 1;
                var_s1 += 0x40;
                if (var_s2 >= 0xA) {
                    return 2;
                }
                goto loop_8;
            }
            goto block_15;
        }
        goto block_15;
    }
block_15:
    return 0;
}
