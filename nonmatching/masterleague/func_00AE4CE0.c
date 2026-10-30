/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
extern void func_001D7D60(void *, s8);
extern s32 func_001F3D10(s32, u8);
extern void func_001B9A50(void *, s32);
void func_00AE4CE0(s8 arg0) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0xB0C), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0xB10), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0xB94), arg0);
        func_001B9A50(M2C_FIELD(temp_v0, void **, 0xD98), (s32) arg0);
        if ((s32) M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0x1118) >= 0xC) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0xF68), (u8) arg0);
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0xF68), 0U);
        }
        var_s1 = 0;
        do {
            temp_a0 = var_s1 & 0xFF;
            if (temp_a0 >= (s32) M2C_FIELD((temp_v0 + (M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314)), u8 *, 0x1118)) {
                func_001D7D60(M2C_FIELD((temp_v0 + (temp_a0 * 4)), void **, 0xB14), 0);
            } else {
                func_001D7D60(M2C_FIELD((temp_v0 + (temp_a0 * 4)), void **, 0xB14), arg0);
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 0x20);
    }
}
