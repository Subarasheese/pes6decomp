/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

u8 func_00C18720(void);

int func_0030E940(u8 *out)
{
    *out = func_00C18720() & 0x7F;
    return 1;
}
