/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern void func_00AE50E0(s32);
extern void * func_001D5A10(s32);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00AE4F40(u8);                          /* extern */
M2C_UNK func_00AE5330(s32);                         /* extern */
M2C_UNK func_00AE5790(s32, u8);                     /* extern */
M2C_UNK func_00AE5A20();                            /* extern */
M2C_UNK func_00AE5BB0();                            /* extern */
M2C_UNK func_00AE5D70();                            /* extern */
s32 func_00AE72D0(u8);                              /* extern */

void func_00AE6100(void) {
    u32 temp_v0;

    temp_v0 = func_00AE7320();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10309);
        func_00AE5D70();
        func_00AE5BB0();
        func_00AE5A20();
        func_00AE5790(func_00AE72D0(M2C_FIELD(temp_v0, u8 *, 0x588)) & 0xFF, M2C_FIELD(temp_v0, u8 *, 0x58A));
        func_00AE5330(M2C_FIELD(temp_v0, s32 *, 0x590));
        func_00AE50E0((s32) M2C_FIELD(temp_v0, u8 *, 0x588));
        func_00AE4F40(M2C_FIELD(temp_v0, u8 *, 0x589));
        func_00958000(0x60);
    }
}
