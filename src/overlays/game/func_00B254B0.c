/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"
void func_00B254B0(s32 value) {
    D_00CBBEB4[0] = value;
    D_00CBBEB8->bit0 = 1;
    D_00CBBEB8->bit1 = 1;
    D_00CBBEBC->bit0 = 0;
    D_00CBBEBC->bit1 = 0;
    D_00CBBEBC->bit2 = 1;
    D_00CBBEC0->bit1 = 1;
    D_00CBBEC4[0] = 255;
    D_00CBBEC0->bit0 = 1;
    D_00CBBEC0->bit2 = 0;
}
