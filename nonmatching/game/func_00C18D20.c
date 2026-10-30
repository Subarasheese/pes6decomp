/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];

s32 func_00C18D20(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    void *temp_v0;

    temp_v1 = arg0 & 0xFF;
    var_v0 = 0xFF;
    if (temp_v1 != 0xFF) {
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = temp_v1 % 23;
        }
        temp_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        var_v0 = ((M2C_FIELD(temp_v0, u8 *, 0x12) << 5) | (M2C_FIELD(temp_v0, u8 *, 0x11) & 0x1F)) & 0xFF;
    }
    return var_v0;
}
