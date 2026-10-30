/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD96F0();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBCDE2[];

s32 func_00992C20(void) {
    s32 var_a0;
    s32 var_s0;
    u8 temp_v1;
    void *temp_a0;

    var_s0 = 0;
    if (func_00BD96F0() != 0) {
        if ((*(u8 *)D_00CBCDE2) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (*(u8 *)D_00CBCDE2) % 23;
        }
        temp_a0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (M2C_FIELD(temp_a0, u8 *, 0x12) == 0) {
            var_s0 = 1;
        } else {
            temp_v1 = M2C_FIELD(temp_a0, u8 *, 0x13);
            if (temp_v1 == 0) {
                if (!(M2C_FIELD(temp_a0, f32 *, 0xE0) <= 0.0f)) {
                    var_s0 = 3;
                } else {
                    goto block_11;
                }
            } else {
block_11:
                switch (temp_v1) {                  /* irregular */
                case 0:
                    if (M2C_FIELD(temp_a0, f32 *, 0xE0) < 0.0f) {
                        goto block_16;
                    }
                    if ((temp_v1 == 1) && !(M2C_FIELD(temp_a0, f32 *, 0xE0) <= 0.0f)) {
block_16:
                        var_s0 = 2;
                    } else {
                    default:
                        var_s0 = 3;
                    }
                    break;
                }
            }
        }
    }
    return var_s0 & 0xFF;
}
