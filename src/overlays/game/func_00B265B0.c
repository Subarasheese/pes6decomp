/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B265B0(void)
{
    s32 wasSet = D_00CBBE8B->bit0;

    D_00CBBE8B->bit0 = 0;
    return wasSet;
}
