/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];

s32 func_00C162F0(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 var_a2;
    s32 var_a4;
    s32 var_v0;
    u8 temp_a3_2;
    void *temp_a3_3;
    void *var_a0;

    var_a0 = arg0;
    var_v0 = 0;
    var_a2 = 0;
loop_1:
    temp_a3 = M2C_FIELD(var_a0, s32 *, 0);
    if ((temp_a3 != 0) && ((temp_a3 != 3) || (M2C_FIELD(var_a0, s32 *, 0x20) != 8))) {
        temp_a3_2 = M2C_FIELD(var_a0, u8 *, 4);
        if (temp_a3_2 != 0xFF) {
            var_a4 = (s32) temp_a3_2 % 23;
        } else {
            var_a4 = 1;
        }
        temp_a3_3 = ((void *)Pes6MatchPlayers) + (var_a4 * 0x240);
        if ((arg1 & 0xFF) != (((M2C_FIELD(temp_a3_3, u8 *, 0x12) << 5) | (M2C_FIELD(temp_a3_3, u8 *, 0x11) & 0x1F)) & 0xFF)) {
            var_a2 += 1;
            var_a0 += 0x40;
            if (var_a2 >= 0xA) {
                goto block_9;
            }
            goto loop_1;
        }
        var_v0 = 1;
block_9:
        return var_v0;
    }
    return 0;
}
