/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern char Pes6MatchPlayers[];

void func_008CB960(s32 arg0, s8 arg1) {
    s32 var_a0;
    s32 var_a2;

    if (arg0 != 0xFF) {
        var_a2 = arg0 % 23;
    } else {
        var_a2 = 1;
    }
    M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a2 * 0x240)), void **, 4), s8 *, 0x2C) = (s8) (arg1 & 0xFF);
    if (arg0 != 0xFF) {
        var_a0 = arg0 % 23;
    } else {
        var_a0 = 1;
    }
    func_001A58E0((void *) var_a0, arg1);
}
