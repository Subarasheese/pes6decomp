/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B24B70(void)
{
    s32 wasSet = D_00CBBEE0->bit5;

    D_00CBBEE0->bit5 = 0;
    return wasSet;
}
