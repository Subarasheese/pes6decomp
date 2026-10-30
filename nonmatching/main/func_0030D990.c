/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00292F00(u8);                              /* extern */
extern char Pes6MatchPlayers[];

s32 func_0030D990(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    return func_00292F00(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x10)) & 0xFF;
}
