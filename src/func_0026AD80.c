/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_00592800[];

s32 func_0026AD80(void) {
    s32 count = 0;
    s32 i;
    u8 *entry;

    for (i = 0, entry = D_00592800; i < 8; i++) {
        if (*entry < 8) {
            count++;
        }
        entry += 0x28;
    }
    return count;
}
