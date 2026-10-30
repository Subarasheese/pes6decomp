/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void * func_001D5A10(s32);
extern u32 func_00B3D3D0(void);
M2C_UNK func_00973C70(void *, s32);                 /* extern */
M2C_UNK func_00B37B90();                            /* extern */
M2C_UNK func_00B39320();                            /* extern */
M2C_UNK func_00B3BBE0();                            /* extern */
extern void *D_003E77B0;

void func_00B3C380(void) {
    s32 temp_s1;
    s32 var_s0;
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00B3D3D0();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10328);
        func_00B3BBE0();
        temp_s1 = M2C_FIELD(temp_v0, s32 *, 0x58);
        temp_v0_2 = func_00B3D3D0();
        if (temp_v0_2 != 0) {
            func_00973C70(M2C_FIELD(temp_v0_2, void **, 0xC), temp_v0_2 + (temp_s1 * 0x10) + 0x60);
            if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
                func_001D7D80(M2C_FIELD(temp_v0_2, void **, 0xC), 1);
            } else if (temp_s1 != 0) {
                func_001D7D80(M2C_FIELD(temp_v0_2, void **, 0xC), 1);
            } else {
                func_001D7D80(M2C_FIELD(temp_v0_2, void **, 0xC), 0);
            }
            func_001D7D80(M2C_FIELD(temp_v0_2, void **, 0x18), (s16) ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
        }
        var_s0 = 0;
        if ((M2C_FIELD(temp_v0, s32 *, 0x54) * 4) > 0) {
            do {
                func_00B39320();
                var_s0 += 1;
            } while (var_s0 < (M2C_FIELD(temp_v0, s32 *, 0x54) * 4));
        }
        func_00B37B90();
    }
}
