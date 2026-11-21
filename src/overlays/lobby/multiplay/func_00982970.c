/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(s32);
M2C_UNK func_002DF960(s32);
extern void func_00D0C540(void);
extern s32 D_00A7D6E4[];
extern s32 D_00A7D6E8[];
extern s32 D_00A7D70C[];

s32 func_00982970(void) {
    func_001D7F10(D_00A7D6E4[0]);
    func_001D7F10(D_00A7D6E8[0]);
    func_002DF960(D_00A7D70C[0]);
    func_00D0C540();
    return 1;
}
