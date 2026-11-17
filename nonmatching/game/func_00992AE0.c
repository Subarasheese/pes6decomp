/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00BF6270(void);
extern char Pes6MatchPlayers[];

s32 func_00992AE0(void) {
    s32 var_a0;
    u16 temp_v1;

    if (func_00BF6270() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6270() % 23;
    }
    temp_v1 = M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void **, 4), u16 *, 0x30);
    if (temp_v1 == 0x59D) {
        return 2;
    }
    if (temp_v1 == 0x59C) {
        return 1;
    }
    return 0;
}
