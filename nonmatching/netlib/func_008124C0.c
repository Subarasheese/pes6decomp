/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00811A80(M2C_UNK, s32, s32, u8);       /* extern */
extern char D_0088A918[];

s32 func_008124C0(s32 arg0) {
    s32 temp_a2;
    u8 temp_a3;

    temp_a3 = (*(u8 *)D_0088A918);
    temp_a2 = 0 & 1;
    (*(u8 *)D_0088A918) = (temp_a3 & ~1) | temp_a2;
    func_00811A80(1, arg0, temp_a2, temp_a3);
    return 0;
}
