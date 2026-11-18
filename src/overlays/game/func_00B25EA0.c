/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B25EA0(void)
{
    s32 wasSet = D_00CBBECC->bit1;

    D_00CBBECC->bit1 = 0;
    return wasSet;
}
