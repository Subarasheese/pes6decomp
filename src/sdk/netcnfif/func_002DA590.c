/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_001C7F58(void *, s32);
extern s32 func_002D9D28(void);
M2C_UNK func_002DB028(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern char D_003B31F8[];
extern char D_005E5F00[];
extern char D_005E5F40[];

void func_002DA590(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *new_var3;
    s8 *new_var;
    char *new_var2;
    func_002D9D28();
    new_var2 = D_005E5F40;
    func_001C7F58(((void *)new_var2) + 0x10, arg0);
    new_var = ((s8 *)((void *)new_var2)) + 8;
    *((s32 *)new_var) = arg1;
    func_001C7F58(((void *)D_005E5F40) + 0x110, arg2);
    new_var3 = &arg3;
    func_001C7F58(((void *)new_var2) - -0x210, *new_var3);
    *((s32 *)(((s8 *)((void *)D_005E5F40)) + 4)) = (s32)(*((s32 *)D_003B31F8));
    func_002DB028((void *)D_005E5F00, (void *)new_var2, 4);
}
