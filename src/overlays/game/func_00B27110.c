/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B27110(void)
{
    s32 wasSet = D_00CBBEEC->bit0;

    D_00CBBEEC->bit0 = 0;
    return wasSet;
}
