/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern u32 func_00B15370(void);
extern void func_001B9A50(void *, s32);
M2C_UNK func_00971CE0(s32, s8);                     /* extern */
M2C_UNK func_00972020(s32, s8);                     /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
M2C_UNK func_00B0E9C0(u8);                          /* extern */
s32 func_00B15290(u8);                              /* extern */

void func_00B0A8F0(s8 arg0) {
    s32 temp_a0;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s2;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC2C) == 1) {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x314), arg0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x320), arg0);
        }
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0xC0B) < 2) {
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x348), 0);
        } else {
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x348), arg0);
        }
        var_s3 = 0;
        var_s2 = temp_v0;
        do {
            func_001D7D60(M2C_FIELD(var_s2, void **, 0x10), arg0);
            func_001D7D60(M2C_FIELD(var_s2, void **, 0x190), arg0);
            func_001D7D60(M2C_FIELD(var_s2, void **, 0x210), arg0);
            var_s3 += 1;
            var_s2 += 4;
        } while (var_s3 < 0x20);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x290), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x32C), arg0);
        func_00972020(M2C_FIELD(temp_v0, s32 *, 0x330), arg0);
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x344);
        if (temp_a0 != 0) {
            func_00971CE0(temp_a0, arg0);
        }
        func_001B9A50(M2C_FIELD(temp_v0, void **, 0x34C), (s32) arg0);
        if (func_00B15290(M2C_FIELD(temp_v0, u8 *, 0xC0A)) >= 0xC) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x350), (u8) arg0);
        }
        if ((arg0 & 0xFF) == 1) {
            func_00B0E9C0(M2C_FIELD(temp_v0, u8 *, 0xC0A));
            func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
        }
    }
}
