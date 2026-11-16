/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001902D0(M2C_UNK, M2C_UNK, s32, s32, M2C_UNK); /* extern */
extern char D_0051FFD0[];
extern char D_0051FFD8[];

void func_001861E0(void) {
    s32 a2;
    s32 a3;

    a2 = (*(s32 *)D_0051FFD0 & ~6) | 0x90;
    *(s32 *)D_0051FFD0 = a2;
    a3 = *(s32 *)D_0051FFD8;
    *(s32 *)D_0051FFD8 = (a3 & ~6) | 0x90;
    func_001902D0(1, 1, a2, a3, -7);
}
