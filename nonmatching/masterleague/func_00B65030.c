/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern void func_001EDAE0(void *, s8);
M2C_UNK func_00956A80(s32, s8);                     /* extern */
M2C_UNK func_00972020(s32, s8);                     /* extern */
extern void *D_003EAED0;

void func_00B65030(s32 arg0) {
    s32 temp_s6;
    s32 var_s0;
    s32 var_s5;
    s8 temp_s1;
    u8 temp_s0;
    void *temp_s2;
    void *var_s4;
    void *var_s4_2;

    temp_s2 = D_003EAED0;
    if (temp_s2 != NULL) {
        temp_s1 = arg0 & 0xFF;
        func_001D7D60(M2C_FIELD(temp_s2, void **, 0x388), temp_s1);
        temp_s0 = M2C_FIELD(temp_s2, u8 *, 0x440);
        var_s5 = 0;
        var_s4 = temp_s2;
        temp_s6 = temp_s0 + 0xA;
        do {
            if ((var_s5 >= (s32) temp_s0) && (temp_s6 >= var_s5)) {
                if (var_s5 >= M2C_FIELD(temp_s2, s32 *, 0x5C4)) {
                    goto block_6;
                }
                func_001D7D60(M2C_FIELD(var_s4, void **, 8), temp_s1 & 0xFF);
            } else {
block_6:
                func_001D7D60(M2C_FIELD(var_s4, void **, 8), 0);
            }
            var_s5 += 1;
            var_s4 += 4;
        } while (var_s5 < 0x20);
        var_s0 = 0;
        var_s4_2 = temp_s2;
        do {
            func_001D7D60(M2C_FIELD(var_s4_2, void **, 0x3D0), temp_s1 & 0xFF);
            if (var_s0 >= M2C_FIELD(temp_s2, s32 *, 0x5C4)) {
                func_001D7D60(M2C_FIELD(var_s4_2, void **, 0x3D0), 0);
            }
            var_s0 += 1;
            var_s4_2 += 4;
        } while (var_s0 < 0x17);
        func_001D7D60(M2C_FIELD(temp_s2, void **, 0x42C), temp_s1);
        func_00972020(M2C_FIELD(temp_s2, s32 *, 0x434), temp_s1);
        func_001EDAE0(M2C_FIELD(temp_s2, void **, 0x668), temp_s1);
        func_001F3D10(M2C_FIELD(temp_s2, s32 *, 0x43C), (u8) temp_s1);
        func_00956A80(M2C_FIELD(temp_s2, s32 *, 0x38C), temp_s1);
    }
}
