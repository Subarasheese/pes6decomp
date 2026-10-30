/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEE570(void);
extern void func_001D7D60(void *, s8);
extern s32 func_001F3D10(s32, u8);
extern void func_001B9A50(void *, s32);
M2C_UNK func_00972020(s32, s8);                     /* extern */

void func_00AED450(s8 arg0) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00AEE570();
    if (temp_v0 != 0) {
        func_00972020(M2C_FIELD(temp_v0, s32 *, 0x400), arg0);
        var_s1 = 0;
        do {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3F6);
            temp_a0 = var_s1 & 0xFF;
            if (((temp_a0 + 1) < (s32) temp_v1) || ((temp_v1 + 0xB) < temp_a0)) {
                func_001D7D60(M2C_FIELD((temp_v0 + ((var_s1 & 0xFF) * 4)), void **, 0x64), 0);
            } else if (temp_a0 < (s32) M2C_FIELD(temp_v0, u8 *, 0x413)) {
                func_001D7D60(M2C_FIELD((temp_v0 + (temp_a0 * 4)), void **, 0x64), arg0);
            } else {
                func_001D7D60(M2C_FIELD((temp_v0 + (temp_a0 * 4)), void **, 0x64), 0);
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 0x20);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x3E4), arg0);
        func_001B9A50(M2C_FIELD(temp_v0, void **, 0x3FC), (s32) arg0);
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x413) < 0xC) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3EC), 0U);
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3EC), (u8) arg0);
        }
    }
}
