/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B26EF0(void)
{
    s32 wasSet = D_00CBBE61->bit2;

    D_00CBBE61->bit2 = 0;
    return wasSet;
}
