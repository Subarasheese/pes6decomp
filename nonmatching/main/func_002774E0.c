/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBAB0(s32);                             /* extern */
extern char Pes6MatchPlayers[];
extern char Pes6MatchSquads[];

s32 func_002774E0(s32 arg0) {
    s32 temp_s2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    void *var_a2;

    temp_s2 = arg0 & 0xFF;
    var_s1 = 0;
    var_s0 = 0;
    if ((func_00AFBAB0(temp_s2) & 0xFF) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (func_00AFBAB0(temp_s2) & 0xFF) % 23;
    }
    var_a2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
loop_5:
    if (M2C_FIELD(((M2C_FIELD(var_a2, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_a2, u8 *, 0x12) * 0x6900))), u8 *, 0xF8) == 0) {
        var_s0 += 1;
        var_a2 += 0x240;
        if (var_s0 < 0xB) {
            goto loop_5;
        }
    } else {
        var_s1 = 1;
    }
    return var_s1;
}
