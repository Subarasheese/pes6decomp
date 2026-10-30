/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBAB0(u8);                              /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CB52A0[];

s32 func_00C23970(u8 *arg0, s32 arg1) {
    M2C_UNK *var_a1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    u8 *var_a4;

    var_s0 = 0;
    if ((func_00AFBAB0(*arg0) & 0xFF) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (func_00AFBAB0(*arg0) & 0xFF) % 23;
    }
    var_a2 = 0;
    var_a4 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    do {
        var_a3 = 0;
        var_a1 = ((void *)D_00CB52A0);
loop_6:
        if ((M2C_FIELD(var_a1, u8 *, 0x6CC) == *var_a4) && (M2C_FIELD(var_a1, s32 *, 0x6BC) == arg1)) {
            var_s0 += 1;
        }
        var_a3 += 1;
        var_a1 += 0x40;
        if (var_a3 < 0x16) {
            goto loop_6;
        }
        var_a2 += 1;
        var_a4 += 0x240;
    } while (var_a2 < 0xB);
    return var_s0;
}
