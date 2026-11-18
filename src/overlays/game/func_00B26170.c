/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"

void func_00B26170(s32 value)
{
    D_00CBBE84[0] = value;
    D_00CBBE80->bit2 = 1;
    D_00CBBE80->bit0 = 1;
    D_00CBBE80->bit1 = 1;
}
