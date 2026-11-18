/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B23DD0(void)
{
    s32 wasSet = D_00CBBF24->bit1;

    D_00CBBF24->bit1 = 0;
    D_00CBBF24->bit0 = 0;
    return wasSet;
}
