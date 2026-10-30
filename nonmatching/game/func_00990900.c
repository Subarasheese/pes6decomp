/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBA70(u8);                              /* extern */
extern char Pes6MatchPlayers[];

s32 func_00990900(u8 *arg0, u32 arg1) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    void *var_v1;

    var_s0 = 0;
    if ((func_00AFBA70(*arg0) & 0xFF) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (func_00AFBA70(*arg0) & 0xFF) % 23;
    }
    var_a0_2 = 0;
    var_v1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    do {
        if ((M2C_FIELD(M2C_FIELD(var_v1, void **, 4), u8 *, 0x2C) != 0) && ((u32) M2C_FIELD((arg0 + (M2C_FIELD(var_v1, u8 *, 0) * 4)), u32 *, 0x158) < arg1)) {
            var_s0 += 1;
        }
        var_a0_2 += 1;
        var_v1 += 0x240;
    } while (var_a0_2 < 0xB);
    return var_s0 & 0xFF;
}
