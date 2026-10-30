/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A0430(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00973C70(s32, s32);                    /* extern */
s32 func_0099FBB0(u8);                              /* extern */
M2C_UNK func_009A35A0();                            /* extern */

void func_009A3BF0(void) {
    u32 temp_v0;
    u32 temp_v0_2;
    u8 temp_s0;

    temp_v0 = func_009A0430();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0x94) = func_001D5A10(func_0099FBB0(M2C_FIELD(temp_v0, u8 *, 5)));
        M2C_FIELD(temp_v0, void **, 0x1A8) = func_001D5A10(0x1029E);
        func_009A35A0();
        temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x418);
        temp_v0_2 = func_009A0430();
        if (temp_v0_2 != 0) {
            func_00973C70(M2C_FIELD(temp_v0_2, s32 *, 0x1AC), temp_v0_2 + ((temp_s0 & 0xFF) * 0x10) + 0x218);
        }
    }
}
