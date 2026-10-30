/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern u32 func_00B0A1E0(void);
extern void func_001B9A50(void *, s32);
M2C_UNK func_00972020(s32, s8);                     /* extern */

void func_00B075D0(s8 arg0) {
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0;
    void *temp_a0_2;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x79C), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x7A8), arg0);
        var_s2 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, void **, 0x498);
            if (temp_a0 != NULL) {
                func_001D7D60(temp_a0, arg0);
            }
            temp_a0_2 = M2C_FIELD(var_s0, void **, 0x618);
            if (temp_a0_2 != NULL) {
                func_001D7D60(temp_a0_2, arg0);
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x20);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x718), arg0);
        func_00972020(M2C_FIELD(temp_v0, s32 *, 0x7B8), arg0);
        func_001B9A50(M2C_FIELD(temp_v0, void **, 0x7CC), (s32) arg0);
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x471) >= 0xC) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x7D0), (u8) arg0);
        }
    }
}
