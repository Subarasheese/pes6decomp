/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_002D9C80();                                /* extern */
extern char D_005E5F40[];

s32 func_002D9D28(void) {
    s32 temp_s0;

    temp_s0 = func_002D9C80();
    func_001C48E8(((void *)D_005E5F40), 0, 0x310);
    return temp_s0;
}
