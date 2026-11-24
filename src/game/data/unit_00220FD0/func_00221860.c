/* compiler: mwcc-3.0.1b210 */
#include "pes6/roster_player_flags.h"
void func_00221860(s32 player, u16 value, s32 index) {
    u8 *flags = func_002228B0(player, 3, 4, 0);
    u8 mask = D_003E74D8[index];
    if (flags) {
        *flags &= ~mask;
        if ((u8)value)
            *flags |= mask;
    }
}
