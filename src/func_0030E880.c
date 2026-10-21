/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

u8 func_002C5B60(u8 key);

/* Look up the value for squad a, slot b; bit 7 is cleared unless the value is 0xFF (none). */
int func_0030E880(u8 *out, u8 a, u8 b)
{
    u8 v = func_002C5B60((a << 5) | (b & 0x1F));

    if (v == 0xFF) {
        *out = 0xFF;
    } else {
        *out = v & 0x7F;
    }
    return 1;
}
