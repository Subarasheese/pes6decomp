/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C8590(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_0081D6D0(s32);                             /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00951C30(M2C_UNK, M2C_UNK *, M2C_UNK *);   /* extern */
extern char D_00A68410[];
extern char D_00A68810[];

s32 func_00951B60(s32 arg0, s32 arg1) {
    func_001C48E8(((void *)D_00A68810), 0, 0x400);
    func_001C48E8(((void *)D_00A68410), 0, 0x400);
    if (func_0081D6D0(arg0) == 0) {
        func_0082C920(0x2C);
        return 1;
    }
    func_001C8590(((void *)D_00A68810), arg0, 0x40);
    if (func_0081D6D0(arg1) == 1) {
        func_001C8590(((void *)D_00A68410), arg1, 0x10);
    }
    return func_00951C30(3, ((void *)D_00A68810), ((void *)D_00A68410));
}
