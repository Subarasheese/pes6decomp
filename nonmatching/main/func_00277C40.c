/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char Pes6MatchSquads[];

void *func_00277C40(s32 arg0) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_a0_2;

    temp_a1 = arg0 & 0xFF;
    if (temp_a1 == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = temp_a1 % 23;
    }
    if (temp_a1 != 0xFF) {
        var_a0_2 = temp_a1 % 23;
    } else {
        var_a0_2 = 1;
    }
    return (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), u8 *, 0x12) * 0x6900)) + 0xF8;
}
