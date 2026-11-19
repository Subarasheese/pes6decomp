/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B25BA0(void)
{
    s32 wasSet = D_00CBBE8D->bit2;

    D_00CBBE8D->bit2 = 0;
    return wasSet;
}
