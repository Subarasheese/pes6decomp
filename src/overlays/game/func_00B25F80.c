/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

void func_00B25F80(s32 value)
{
    D_00CBBECC->bit5 = value == 1;
    D_00CBBECC->bit4 = 1;
}
