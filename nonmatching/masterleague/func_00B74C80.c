/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
extern void func_001D7D80(void *, s16);
M2C_UNK func_00972D60(s32, M2C_UNK, s32);           /* extern */
s32 func_00B767B0(s32);                             /* extern */

void func_00B74C80(s32 arg0) {
    s32 var_s0;
    s32 var_s0_2;
    u32 temp_v0;
    u32 var_s2;
    u32 var_s3;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        var_s0 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x7A1) > 0) {
            var_s3 = temp_v0;
            do {
                func_00972D60(M2C_FIELD(var_s3, s32 *, 0x7DC), 0, arg0);
                var_s0 += 1;
                var_s3 += 8;
            } while (var_s0 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7A1));
        }
        if ((arg0 & 0xFF) == 1) {
            var_s0_2 = 0;
            var_s2 = temp_v0;
            do {
                if ((var_s0_2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7A1)) && (func_00B767B0(var_s0_2 & 0xFF) == 0)) {
                    func_001D7D80(M2C_FIELD(var_s2, void **, 4), 1);
                } else if ((var_s0_2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7A1)) && (func_00B767B0(var_s0_2 & 0xFF) == 2)) {
                    func_001D7D80(M2C_FIELD(var_s2, void **, 4), 2);
                } else {
                    func_001D7D80(M2C_FIELD(var_s2, void **, 4), 0);
                }
                var_s0_2 += 1;
                var_s2 += 4;
            } while (var_s0_2 < 0x20);
        }
    }
}
