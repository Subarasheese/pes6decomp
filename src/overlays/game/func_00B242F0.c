/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

s32 func_00B242F0(void)
{
    s32 wasSet = D_00CBBF10->bit6;

    D_00CBBF10->bit6 = 0;
    return wasSet;
}
