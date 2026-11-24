/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"
void func_00B24970(s32 value) {
    D_00CBBF0C->bit0 = 1;
    D_00CBBF0C->bit3 = 1;
    D_00CBBF0C->bit4 = !!value;
}
