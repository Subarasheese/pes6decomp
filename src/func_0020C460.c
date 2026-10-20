/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00209C60(s32, M2C_UNK);                /* extern */
M2C_UNK func_00209C90(s32, M2C_UNK);                /* extern */
s32 func_0020A550(s32);                             /* extern */
extern s32 D_003E99E8;

void func_0020C460(s32 arg0) {
    if (D_003E99E8 == 0) {
        D_003E99E8 = func_0020A550(arg0 * 2);
    }
    func_00209C90(D_003E99E8, 0);
    func_00209C60(D_003E99E8, 2);
}
