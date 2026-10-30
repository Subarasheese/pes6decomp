/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern void func_001B9A50(void *, s32);
extern u32 func_009B7F90(void);
M2C_UNK func_00972020(s32, s8);                     /* extern */

void func_009B4840(s8 arg0) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_009B7F90();
    if (temp_v0 != 0) {
        func_00972020(M2C_FIELD(temp_v0, s32 *, 0x3FC), arg0);
        var_s1 = 0;
        do {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3F2);
            temp_a0 = var_s1 & 0xFF;
            if (((temp_a0 + 1) < (s32) temp_v1) || ((temp_v1 + 0xB) < temp_a0)) {
                func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1 & 0xFF) * 4)), void **, 0x60), 0);
            } else if (temp_a0 < (s32) M2C_FIELD(temp_v0, u8 *, 0x40F)) {
                func_001D7D60(M2C_FIELD((temp_v0 + (temp_a0 * 4)), void **, 0x60), arg0);
            } else {
                func_001D7D60(M2C_FIELD((temp_v0 + (temp_a0 * 4)), void **, 0x60), 0);
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 0x20);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x3E0), arg0);
        func_001B9A50(M2C_FIELD(temp_v0, void **, 0x3F8), (s32) arg0);
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x40F) < 0xC) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3E8), 0U);
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3E8), (u8) arg0);
        }
    }
}
