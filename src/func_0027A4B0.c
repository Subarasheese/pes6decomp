/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6MatchPlayers[];

void func_0027A4B0(s8 value) {
    u32 slot;
    u32 index;

    index = 0;
    do {
        if (index != 0xFF) {
            slot = index % 23U;
        } else {
            slot = 1;
        }
        index += 1;
        M2C_FIELD(M2C_FIELD((((u8 *)Pes6MatchPlayers) + (slot * 0x240)), void **, 4), s8 *, 0xD) = value;
    } while (index < 0x17U);
}
