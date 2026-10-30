/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];

s32 func_00990750(s32 arg0, u32 arg1, f32 fparg0, f32 fparg1) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    void *var_v1;

    temp_a0 = (arg0 & 0xFF) * 0xB;
    if ((temp_a0 + 1) == 0xFF) {
        var_a0_2 = 1;
    } else {
        var_a0_2 = (temp_a0 % 23) + 1;
    }
    var_a2 = 0;
    var_a0 = 0;
    var_v1 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
    do {
        if (M2C_FIELD(M2C_FIELD(var_v1, void **, 4), u8 *, 0x2C) != 0) {
            var_v0 = (s32) (fparg0 - M2C_FIELD(var_v1, f32 *, 0xE0));
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if ((u32) var_v0 < arg1) {
                var_v0_2 = (s32) (fparg1 - M2C_FIELD(var_v1, f32 *, 0xE8));
                if (var_v0_2 <= 0) {
                    var_v0_2 = -var_v0_2;
                }
                if ((u32) var_v0_2 < arg1) {
                    var_a0 += 1;
                }
            }
        }
        var_a2 += 1;
        var_v1 += 0x240;
    } while (var_a2 < 0xB);
    return var_a0 & 0xFF;
}
