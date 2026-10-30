/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0029A000(s32);
M2C_UNK func_0027B270(void *, M2C_UNK);             /* extern */
M2C_UNK func_0027B450(void *, M2C_UNK, s32);        /* extern */
void **func_00299FE0(M2C_UNK);                      /* extern */
M2C_UNK func_0029A020(M2C_UNK);                     /* extern */
s32 func_00BA9430(M2C_UNK);                         /* extern */
extern void **D_00CBD7B0;

s32 func_00BF8CC0(void) {
    if ((M2C_FIELD(func_00299FE0(0), u8 *, 4) == 1) && (D_00CBD7B0 != NULL)) {
        func_0027B270(*D_00CBD7B0, 0x8CB4);
        func_0029A000(0);
    }
    func_0029A020(0);
    D_00CBD7B0 = func_00299FE0(0);
    func_0027B450(*D_00CBD7B0, 4, func_00BA9430(1));
    M2C_FIELD(*D_00CBD7B0, s32 *, 0x2C) = 0;
    return 1;
}
