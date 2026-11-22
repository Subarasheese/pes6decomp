/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001D5C40(M2C_UNK);
M2C_UNK func_001D7F10(s32);
extern s32 D_00A7D728[];
extern s32 D_00A7D730[];
extern s32 D_00A7D738[];
extern s32 D_00A7D750[];

s32 func_00985E60(void) {
    if (D_00A7D728[0] != 0) {
        func_001D7F10(D_00A7D728[0]);
        D_00A7D728[0] = 0;
    }
    func_001D5C40(0x103C0);
    D_00A7D730[0] = 0;
    D_00A7D738[0] = 0;
    D_00A7D750[0] = 0;
    return 1;
}
