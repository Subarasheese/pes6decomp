/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B447A0(void);
extern void func_001D7D60(void *, s8);
s32 func_0095C4A0(u16);                             /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, s32, s32);               /* extern */
s32 func_00B430B0();                                /* extern */

void func_00B3E440(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2_3;
    u16 temp_a0;
    u16 temp_a0_2;
    u32 var_s0;
    u32 var_s2;
    u32 var_s2_2;
    void *var_s1_3;

    var_s0 = func_00B447A0();
    if (var_s0 != 0) {
        if ((func_00B430B0() & 0xFF) != 0x48) {
            if (M2C_FIELD(var_s0, s32 *, 0x6B4) != 2) {
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x1B8), 0);
                return;
            }
            func_001D7D60(M2C_FIELD(var_s0, void **, 0x1B8), 1);
            temp_v0 = arg0 & 0xFF;
            if (temp_v0 >= 4) {
                var_s1 = 0;
                var_s2 = var_s0;
                do {
                    func_009737C0(M2C_FIELD(var_s2, s32 *, 0x1BC), 0);
                    var_s1 += 1;
                    var_s2 += 4;
                } while (var_s1 < 0x10);
                var_s1_2 = 0;
                var_s2_2 = var_s0;
                do {
                    temp_a0 = M2C_FIELD(var_s0, u16 *, 0x6A0);
                    if (temp_a0 == 0xFFFF) {
                        func_009737C0(M2C_FIELD(var_s2_2, s32 *, 0x1BC), 0);
                    } else {
                        func_009737E0(M2C_FIELD(var_s2_2, s32 *, 0x1BC), var_s1_2 + 5, func_0095C4A0(temp_a0));
                        func_009737C0(M2C_FIELD(var_s2_2, s32 *, 0x1BC), 1);
                    }
                    var_s1_2 += 1;
                    var_s0 += 2;
                    var_s2_2 += 4;
                } while (var_s1_2 < 8);
            } else {
                var_s2_3 = 0;
                var_s1_3 = var_s0 + (temp_v0 << 5);
                do {
                    temp_a0_2 = M2C_FIELD(var_s1_3, u16 *, 0x620);
                    if (temp_a0_2 == 0xFFFF) {
                        func_009737C0(M2C_FIELD(var_s0, s32 *, 0x1BC), 0);
                    } else {
                        func_009737E0(M2C_FIELD(var_s0, s32 *, 0x1BC), var_s2_3 + 5, func_0095C4A0(temp_a0_2));
                        func_009737C0(M2C_FIELD(var_s0, s32 *, 0x1BC), 1);
                    }
                    var_s2_3 += 1;
                    var_s1_3 += 2;
                    var_s0 += 4;
                } while (var_s2_3 < 0x10);
            }
        } else {
            func_001D7D60(M2C_FIELD(var_s0, void **, 0x1B8), 0);
        }
    }
}
