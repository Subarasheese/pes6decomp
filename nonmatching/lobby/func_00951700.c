/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C8590(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_0081D6D0(s32);                             /* extern */
M2C_UNK func_00951790(M2C_UNK, s32, M2C_UNK *, s32); /* extern */
extern char D_00A68810[];

void func_00951700(s32 arg0, s32 arg1, s32 arg2) {
    func_001C48E8(((void *)D_00A68810), 0, 0x400);
    if (func_0081D6D0(arg1) == 1) {
        func_001C8590(((void *)D_00A68810), arg1, 0x10);
    }
    func_00951790(3, arg0, ((void *)D_00A68810), arg2);
}
