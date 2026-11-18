/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

void func_00B246A0(s32 enabled)
{
    if (enabled) {
        D_00CBBF0D->bit2 = 1;
    } else {
        D_00CBBF0D->bit2 = 0;
    }
}
