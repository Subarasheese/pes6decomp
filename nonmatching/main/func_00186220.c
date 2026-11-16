/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001902D0(M2C_UNK, M2C_UNK, s32, s32, M2C_UNK); /* extern */
extern char D_0051FFD0[];
extern char D_0051FFD8[];

void func_00186220(void) {
    s32 a;
    s32 b;

    a = ((*(s32 *)D_0051FFD0) & ~6) | 0x90;
    b = *(s32 *)D_0051FFD8; (*(s32 *)D_0051FFD8) = (b & ~6) | 0x90;
    (*(s32 *)D_0051FFD0) = a;
    func_001902D0(1, 1, a, b, -7);
}
