/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B6DB70(void);
extern void func_00B20EF0(u16);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s16 func_00B6DB40(u8);                              /* extern */

s32 func_00B6D9C0(void) {
    s16 temp_v0_2;
    u32 temp_v0;

    temp_v0 = func_00B6DB70();
    if (temp_v0 != 0) {
        temp_v0_2 = func_00B6DB40(M2C_FIELD(temp_v0, u8 *, 0x5C));
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), s16 *, 0xF8) = temp_v0_2;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), s32 *, 0xFC) = 1;
        func_00B20EF0(temp_v0_2 & 0xFFFF);
        M2C_FIELD(temp_v0, s32 *, 0x64) = 1;
        func_0026E840(0x84028400);
    }
    return 0;
}
