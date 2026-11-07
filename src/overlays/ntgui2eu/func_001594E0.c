/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


M2C_UNK func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_001B02B0(void *, s32);                 /* extern */
extern char D_011E3980[];
extern char D_011E3A00[];

void func_001594E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = (s32 *)D_011E3A00;
    p[2] = arg0;
    func_001B02B0(D_011E3A00 + 0x230, arg2);
    p[8] = arg1;
    func_0019EE30(((void *)D_011E3980), 0x14, 1, ((void *)D_011E3A00), 0x1000, ((void *)D_011E3A00), 0x1000, 0, 0);
}
