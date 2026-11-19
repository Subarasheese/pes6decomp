/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

void func_00B24790(s32 value)
{
    if (value) {
        D_00CBBF0D->bit1 = 1;
    } else {
        D_00CBBF0D->bit3 = 1;
    }
    D_00CBBF0D->bit0 = 1;
}
