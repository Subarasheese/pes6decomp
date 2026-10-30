/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019AD60(s32, s32, s32);               /* extern */
s32 func_001A4C08();                                /* extern */
M2C_UNK func_001A4D20();                            /* extern */
extern char D_005CBF38[];

void func_001A4D98(M2C_UNK arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = func_001A4C08();
    func_001A4D20();
    func_0019AD60(temp_s0, arg1, (*(s32 *)D_005CBF38) + 4);
}
