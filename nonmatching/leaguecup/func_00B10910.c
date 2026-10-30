/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B0F670(s32);
extern void * func_001D5A10(s32);
extern u32 func_00B0CD50(void);
extern void func_00B0FDE0(s32);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B0EF70();                            /* extern */
M2C_UNK func_00B0F8A0(s32, u8, M2C_UNK);            /* extern */
M2C_UNK func_00B10290();                            /* extern */

void func_00B10910(void) {
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10304);
        func_00B10290();
        func_00B0F670(M2C_FIELD(temp_v0, s32 *, 0x141C));
        func_00B0F8A0(M2C_FIELD(temp_v0, s32 *, 0x141C), M2C_FIELD(temp_v0, u8 *, 0x132C), 0);
        temp_v0_2 = func_00B0CD50();
        if (temp_v0_2 != 0) {
            func_00956A80(M2C_FIELD(temp_v0_2, s32 *, 0xE14), 0);
            func_009737C0(M2C_FIELD(temp_v0_2, s32 *, 0xE08), 0);
        }
        func_00B0FDE0((s32) M2C_FIELD(temp_v0, u8 *, 0x132D));
        func_00B0EF70();
        func_00958000(0x80);
    }
}
