/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_00158BD8(void *, void *, s32);
M2C_UNK func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK,
                      s32);
M2C_UNK func_001B02B0(void *, s32);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00158E78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *new_var3;
    int new_var4;
    s8 *new_var;
    void *new_var2;
    void *new_var5;
    void *new_var6;
    new_var5 = (void *)D_011E3A00;
    new_var2 = new_var5 + 0x30;
    *((s32 *)(new_var = ((s8 *)new_var5) + 4)) = arg0;
    new_var4 = 0;
    new_var3 = 0x10 + ((s8 *)((void *)D_011E3A00));
    *((s32 *)new_var3) = arg1;
    new_var6 = new_var5;
    func_001B02B0(new_var2, arg2);
    func_00158BD8(((void *)D_011E3A00) + 0x230, ((void *)D_011E3A00) + 0x20, arg3);
    func_0019EE30((void *)D_011E3980, 3, 1, new_var6, 0x1000, new_var6, 0x1000, new_var4, new_var4);
}
