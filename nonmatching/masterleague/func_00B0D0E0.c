/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void func_001D7D60(void *, s8);
extern u8 func_00226B40(void);
extern u32 func_00B15370(void);
s32 func_00B02A20(s32);                             /* extern */

void func_00B0D0E0(s32 arg0, s32 arg1, s8 arg2, s8 arg3) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x7A8) != 0) {
            temp_v1 = func_00B02A20(arg0) & 0xFF;
            if (temp_v1 < 0xF) {
                var_v0 = 0x1E;
            } else {
                var_v0 = (temp_v1 - 0xF) & 0xFF;
            }
            var_s2 = 0;
            do {
                if (((var_s2 & 0xFF) >= (var_v0 & 0xFF)) && (func_00226B40() == 0)) {
                    func_001EF900(M2C_FIELD((temp_v0 + ((var_s2 & 0xFF) * 4)), void **, 0x7A8), 0);
                } else {
                    func_001EF900(M2C_FIELD((temp_v0 + ((var_s2 & 0xFF) * 4)), void **, 0x7A8), arg2);
                }
                var_s2 = (var_s2 + 1) & 0xFF;
            } while (var_s2 < 0x1D);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x890), arg2);
        }
        if (M2C_FIELD(temp_v0, s32 *, 0x81C) != 0) {
            temp_v1_2 = func_00B02A20(arg1) & 0xFF;
            if (temp_v1_2 < 0xF) {
                var_v0_2 = 0x1E;
            } else {
                var_v0_2 = (temp_v1_2 - 0xF) & 0xFF;
            }
            var_s2_2 = 0;
            do {
                if (((var_s2_2 & 0xFF) >= (var_v0_2 & 0xFF)) && (func_00226B40() == 0)) {
                    func_001EF900(M2C_FIELD((temp_v0 + ((var_s2_2 & 0xFF) * 4)), void **, 0x81C), 0);
                } else {
                    func_001EF900(M2C_FIELD((temp_v0 + ((var_s2_2 & 0xFF) * 4)), void **, 0x81C), arg3);
                }
                var_s2_2 = (var_s2_2 + 1) & 0xFF;
            } while (var_s2_2 < 0x1D);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x894), arg3);
        }
    }
}
