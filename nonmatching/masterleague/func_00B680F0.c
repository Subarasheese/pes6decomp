/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B68690(void);
extern void func_00B20EF0(u16);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u16 func_00B685C0(u8);                              /* extern */

s32 func_00B680F0(void) {
    u32 temp_v0;

    temp_v0 = func_00B68690();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, u16 *, 0x14C) = func_00B685C0(M2C_FIELD(temp_v0, u8 *, 0x144));
        func_00B20EF0(M2C_FIELD(temp_v0, u16 *, 0x14C));
        M2C_FIELD(temp_v0, s32 *, 0x148) = 1;
        func_0026E840(0x84028400);
    }
    return 0;
}
