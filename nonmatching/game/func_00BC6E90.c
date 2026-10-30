/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BC6F00(u8);                          /* extern */
M2C_UNK func_00BC71E0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003E758C;
extern char D_00591F24[];
extern char D_00CBD5D1[];

void func_00BC6E90(void) {
    if ((*(u8 *)D_00591F24) != 6) {
        if ((*(u8 *)D_00CBD5D1) != 0) {
            func_00BC71E0(D_003E758C, 0xFF, 0xFF, 0x14, 2, 0);
        }
    } else {
        func_00BC6F00((*(u8 *)D_00591F24));
    }
}
