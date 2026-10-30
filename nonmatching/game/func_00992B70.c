/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00277360(void *, s32);                     /* extern */
s32 func_00BEC520();                                /* extern */
extern char Pes6MatchPlayers[];
extern char Pes6MatchSquads[];

s32 func_00992B70(void) {
    s32 var_a0;
    u8 temp_a1;
    void *temp_v0;

    if ((func_00BEC520() & 0xFF) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (func_00BEC520() & 0xFF) % 23;
    }
    temp_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x12);
    return func_00277360((M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a1 * 0x6900)) + 0xF0, temp_a1 * 0x69) != 0;
}
