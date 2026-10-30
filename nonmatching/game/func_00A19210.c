/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AA00C0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

s32 func_00A19210(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    u8 *var_v0;

    temp_v0 = arg1 & 0xFF;
    if (temp_v0 != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x13) != 0) {
            if ((temp_v0 >= 0xC) && (temp_v0 < 0x17)) {
                return temp_v0;
            }
            if ((func_00AA00C0(arg0) & 0xFF) == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) (func_00AA00C0(arg0) & 0xFF) % 23;
            }
            var_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
            goto block_21;
        }
        if ((temp_v0 > 0) && (temp_v0 < 0xC)) {
            return temp_v0;
        }
        if ((func_00AA00C0(arg0) & 0xFF) == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) (func_00AA00C0(arg0) & 0xFF) % 23;
        }
        var_v0 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
block_21:
        return (s32) *var_v0;
    }
    return 0;
}
