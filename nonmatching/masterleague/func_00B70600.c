/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_00971580(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00B70200(u8, M2C_UNK);                 /* extern */
extern char D_00B88B08[];

void func_00B70600(void) {
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        temp_v0_2 = func_00B71C80();
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, s32 *, 0xC) = func_00971580(0, 1, 0, ((void *)D_00B88B08), 0);
            func_00958000(0x13);
        }
        func_00B70200(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11), 0);
    }
}
