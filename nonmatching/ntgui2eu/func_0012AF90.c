/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012A2B0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0015C540(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005B59C8[];
extern char D_011D4C90[];
extern char D_011D4CA0[];
extern char D_011D4CB8[];

void func_0012AF90(void) {
    func_0012A2B0(((void *)D_005B59C8), 0xA, 0x64);
    func_0015C540(((void *)D_011D4CA0), 0xA, 0xA);
    func_0015C540(((void *)D_011D4CB8), 0xA, 0xA);
    (*(s32 *)D_011D4C90) = 2;
}
