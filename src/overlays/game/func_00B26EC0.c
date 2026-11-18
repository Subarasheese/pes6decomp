/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B26EC0(void)
{
    s32 wasSet = D_00CBBE61->bit3;

    D_00CBBE61->bit3 = 0;
    return wasSet;
}
