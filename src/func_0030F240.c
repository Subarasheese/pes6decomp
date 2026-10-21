/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

extern u8 D_00591E4C[];

int func_0030F240(u8 *out)
{
    u8 v = D_00591E4C[0];

    if (v == 0) {
        return 0;
    }
    *out = v;
    return 1;
}
