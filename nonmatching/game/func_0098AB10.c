/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBA70(u8);                              /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

u8 func_0098AB10(u8 *arg0) {
    s32 var_a0;
    s32 var_s1;
    u16 temp_v1;
    u8 temp_v0;
    u8 var_s0;
    void *var_s2;

    if (((func_00AFBA70(*arg0) & 0xFF) + 1) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (func_00AFBA70(*arg0) & 0xFF) + 1;
    }
    var_s0 = 0;
    var_s1 = 0;
    var_s2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
loop_5:
    if ((func_00BDB8B0(var_s2) != 0) && ((temp_v0 = M2C_FIELD(var_s2, u8 *, 0x1D9), (temp_v0 == 0)) || ((u32) M2C_FIELD((var_s2 + ((temp_v0 & 0xFF) * 4)), u32 *, 0x158) >= 0x240000U))) {
        if (M2C_FIELD(var_s2, u8 *, 0x16) == 5) {
            temp_v1 = M2C_FIELD(var_s2, u16 *, 0x18);
            if ((temp_v1 != 0x82) && (temp_v1 != 0x81)) {

            } else {
                var_s0 = M2C_FIELD(var_s2, u8 *, 0);
            }
        }
        if (var_s0 == 0) {
            goto block_15;
        }
    } else {
block_15:
        var_s1 = (var_s1 + 1) & 0xFF;
        var_s2 += 0x240;
        if (var_s1 >= 0xA) {

        } else {
            goto loop_5;
        }
    }
    return var_s0;
}
