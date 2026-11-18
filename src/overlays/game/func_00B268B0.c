/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B268B0(void)
{
    s32 wasSet = D_00CBBE78->bit1;

    D_00CBBE78->bit1 = 0;
    return wasSet;
}
