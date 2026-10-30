/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B10D20(void);
s32 func_00230490();                                /* extern */
M2C_UNK func_00956A80(s32, s8);                     /* extern */
M2C_UNK func_00AE76C0();                            /* extern */
extern void *D_003E77B0;

void func_00AE87A0(s8 arg0) {
    s32 var_s3;
    s32 var_s4;
    s8 var_s2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s0;
    void *temp_a0;

    var_s2 = arg0;
    temp_v0 = func_00B10D20();
    if (temp_v0 != 0) {
        if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
            var_s4 = 3;
        } else if (func_00230490() != 1) {
            var_s4 = 4;
        } else {
            var_s4 = 5;
        }
        var_s3 = 0;
        if (var_s4 >= 0) {
            var_s0 = temp_v0;
            do {
                func_001D7D60(M2C_FIELD(var_s0, void **, 4), var_s2);
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x1C), var_s2);
                var_s3 += 1;
                var_s0 += 4;
            } while (var_s4 >= var_s3);
        }
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x40), var_s2);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x34), var_s2);
        temp_v0_2 = func_00B10D20();
        if ((temp_v0_2 != 0) && (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
            if (M2C_FIELD(temp_v0_2, u8 *, 0xA8) != 0) {
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0xAC), var_s2);
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0xB0), var_s2);
                func_00956A80(M2C_FIELD(temp_v0_2, s32 *, 0xC4), var_s2);
            } else {
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0xAC), var_s2);
            }
        }
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x3C), var_s2);
        func_00AE76C0();
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x44);
        if (temp_a0 != NULL) {
            if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
                var_s2 = 0;
            }
            func_001D7D60(temp_a0, var_s2);
        }
    }
}
