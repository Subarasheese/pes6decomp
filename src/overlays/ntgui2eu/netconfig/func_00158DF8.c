/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_00158BD8(void *, void *, s32);
M2C_UNK func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK,
                      s32);
M2C_UNK func_001B02B0(void *, s32);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00158DF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *new_var;
    new_var = (void *)D_011E3A00;
    *((s32 *)(((s8 *)new_var) + 8)) = arg0;
    *((s32 *)(((s8 *)new_var) + 0x10)) = arg1;
    func_001B02B0(new_var + 0x30, arg2);
    func_00158BD8(new_var + 0x230, new_var + 0x20, arg3);
    func_0019EE30((void *)D_011E3980, 2, 1, new_var, 0x1000, new_var, 0x1000, 0, 0);
}
