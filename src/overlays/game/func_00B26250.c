/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B26250(void)
{
    s32 wasSet = D_00CBBE88->pending;

    D_00CBBE88->pending = 0;
    return wasSet;
}
