/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern void func_001B9A50(void *, s32);
extern u32 func_00B5B230(void);
M2C_UNK func_00956A80(s32, s32);                    /* extern */
M2C_UNK func_00972020(s32, s32);                    /* extern */
M2C_UNK func_00973470(s32, s32);                    /* extern */

void func_00B5CAB0(s32 arg0) {
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_7;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 4);
        if (temp_a0 != NULL) {
            func_001D7D60(temp_a0, arg0 & 0xFF);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 8);
        if (temp_a0_2 != NULL) {
            func_001D7D60(temp_a0_2, arg0 & 0xFF);
        }
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0_3 = M2C_FIELD(var_s0, void **, 0x2CC);
            if (temp_a0_3 != NULL) {
                func_001D7D60(temp_a0_3, arg0 & 0xFF);
            }
            temp_a0_4 = M2C_FIELD(var_s0, s32 *, 0x41C);
            if (temp_a0_4 != 0) {
                func_00973470(temp_a0_4, arg0 & 0xFF);
            }
            temp_a0_5 = M2C_FIELD(var_s0, s32 *, 0x374);
            if (temp_a0_5 != 0) {
                func_00956A80(temp_a0_5, arg0 & 0xFF);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x2A);
        temp_a0_6 = M2C_FIELD(temp_v0, s32 *, 0x620);
        if (temp_a0_6 != 0) {
            func_00972020(temp_a0_6, arg0 & 0xFF);
        }
        temp_a0_7 = M2C_FIELD(temp_v0, void **, 0x614);
        if (temp_a0_7 != NULL) {
            func_001B9A50(temp_a0_7, arg0 & 0xFF);
        }
        temp_a0_8 = M2C_FIELD(temp_v0, s32 *, 0x618);
        if (temp_a0_8 != 0) {
            func_001F3D10(temp_a0_8, arg0 & 0xFF);
        }
    }
}
