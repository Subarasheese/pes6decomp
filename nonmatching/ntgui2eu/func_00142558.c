/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00135130(M2C_UNK);                         /* extern */
s32 func_0019AF20(M2C_UNK *);                       /* extern */
M2C_UNK func_0019C260(s32, M2C_UNK);                /* extern */
M2C_UNK func_001AE7D8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005BD30C[];
extern char D_005BD310[];
extern char D_005FC130[];
extern char D_011DD800[];
extern char D_011DD830[];
extern M2C_UNK func_001424F8;

void func_00142558(void) {
    (*(s32 *)D_005BD310) = 0;
    (*(s32 *)D_005BD30C) = 0;
    func_001AE7D8(((void *)D_011DD800), 0, 0x30);
    M2C_FIELD(((void *)D_011DD800), M2C_UNK **, 4) = &func_001424F8;
    M2C_FIELD(((void *)D_011DD800), M2C_UNK **, 8) = ((void *)D_011DD830);
    M2C_FIELD(((void *)D_011DD800), s32 *, 0xC) = 0x2000;
    M2C_FIELD(((void *)D_011DD800), s32 *, 0x10) = 0;
    M2C_FIELD(((void *)D_011DD800), s32 *, 0x14) = (s32) (func_00135130(0x2000) + 1);
    M2C_FIELD(((void *)D_011DD800), M2C_UNK **, 0x20) = ((void *)D_005FC130);
    func_0019C260(func_0019AF20(((void *)D_011DD800)), 0);
}
