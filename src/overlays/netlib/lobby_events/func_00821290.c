/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(s32);
M2C_UNK func_0099BC80(M2C_UNK);
extern s32 D_008A4338[];
extern s32 D_008A4340[];
extern s32 D_008A4348[];

s32 func_00821290(void) {
    if (D_008A4338[0] != 0) {
        func_001D7F10(D_008A4338[0]);
        D_008A4338[0] = 0;
    }
    if (D_008A4340[0] != 0) {
        func_001D7F10(D_008A4340[0]);
        D_008A4340[0] = 0;
    }
    if (D_008A4348[0] != 0) {
        func_001D7F10(D_008A4348[0]);
        D_008A4348[0] = 0;
    }
    func_0099BC80(0x103A0);
    return 1;
}
