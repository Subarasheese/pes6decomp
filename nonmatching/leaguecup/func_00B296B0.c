/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B2BF70(void);
s32 func_00B2BA30(s32);                             /* extern */
s32 func_00B2BCD0();                                /* extern */

void func_00B296B0(s8 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v1_2;
    s32 var_s3;
    s32 var_s4;
    u32 temp_v0;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_v1;

    temp_v0 = func_00B2BF70();
    if (temp_v0 != 0) {
        temp_s2 = func_00B2BCD0() & 0xFF;
        temp_s0 = func_00B2BA30(temp_s2) & 0xFF;
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x180), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x14C), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x1B8), 0);
        var_s4 = 0;
        temp_s0_2 = temp_v0 + ((temp_s2 & 0xFF) * 0xD8);
        do {
            temp_s2_2 = var_s4 & 0xFF;
            if (temp_s2_2 >= (temp_s0 & 0xFF)) {
                temp_s3 = temp_v0 + (temp_s2_2 * 4);
                func_001D7D60(M2C_FIELD(temp_s3, void **, 0x134), 0);
                func_001D7D60(M2C_FIELD(temp_s3, void **, 0x140), 0);
            } else {
                temp_s3_2 = temp_v0 + (temp_s2_2 * 4);
                func_001D7D60(M2C_FIELD(temp_s3_2, void **, 0x134), arg0);
                temp_v1 = temp_s0_2 + (temp_s2_2 * 0x48);
                if ((M2C_FIELD(temp_v1, s32 *, 0x344) != 0) && (temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 0x368), (temp_v1_2 != 4)) && (temp_v1_2 != 6)) {
                    func_001D7D60(M2C_FIELD(temp_s3_2, void **, 0x140), arg0);
                } else {
                    func_001D7D60(M2C_FIELD(temp_s3_2, void **, 0x140), 0);
                }
            }
            var_s3 = 0;
loop_10:
            if (M2C_FIELD((temp_s0_2 + (temp_s2_2 * 0x48) + (var_s3 & 0xFF)), u8 *, 0x380) != 0) {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x1B8), arg0);
            }
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 < 2) {
                goto loop_10;
            }
            var_s4 = (var_s4 + 1) & 0xFF;
        } while (var_s4 < 3);
    }
}
