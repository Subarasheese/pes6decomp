/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void func_001D7C00(void *, s8);
extern s16 func_001D7B80(void *);
extern void func_001D7C20(void *, s32);
M2C_UNK func_0099D2A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009D00A0();                            /* extern */
extern void *D_00A7DDF8;

s32 func_009D0B00(s32 arg0) {
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;

    if (D_00A7DDF8 == NULL) {
        return 0;
    }
    if (arg0 != 0) {
        var_s1 = 0;
        var_s2 = 0;
loop_15:
        if (var_s2 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
            temp_v0 = D_00A7DDF8 + (var_s2 << 7);
            temp_s0 = M2C_FIELD(temp_v0, void **, 0x84);
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x31);
            if ((u32) (temp_v1 - 4) < 2U) {
                if (M2C_FIELD(temp_v0, s32 *, 8) != arg0) {
                    if (temp_v1 == 4) {
                        temp_s4 = M2C_FIELD(temp_s0, void **, 0x14);
                        func_001D7C20(temp_s4, 0);
                        func_001D7D80(temp_s4, 0);
                        func_001D7D60(temp_s4, 0);
                        func_001D7D80(M2C_FIELD(temp_s0, void **, 0x14), 0);
                        M2C_FIELD(temp_s0, u8 *, 0x31) = 5U;
                        func_001D7C00(M2C_FIELD(temp_s0, void **, 0x14), 0);
                        func_001D7C20(M2C_FIELD(temp_s0, void **, 0x14), 2);
                        func_009D00A0();
                    }
                } else {
                    var_s1 = 1;
                }
            }
            var_s2 += 1;
            goto loop_15;
        }
        if (var_s1 == 0) {
            var_s1_2 = 0;
loop_25:
            if (var_s1_2 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
                temp_v0_2 = D_00A7DDF8 + (var_s1_2 << 7);
                temp_s0_2 = M2C_FIELD(temp_v0_2, void **, 0x84);
                if (M2C_FIELD(temp_v0_2, s32 *, 8) == arg0) {
                    temp_v1_2 = M2C_FIELD(temp_s0_2, u8 *, 0x31);
                    if ((temp_v1_2 != 3) && (temp_v1_2 != 0)) {
                        M2C_FIELD(temp_s0_2, u8 *, 0x31) = 4U;
                        temp_s2 = M2C_FIELD(temp_s0_2, void **, 0x14);
                        func_001D7C20(temp_s2, 0);
                        func_001D7D80(temp_s2, 0);
                        func_001D7D60(temp_s2, 0);
                        temp_s2_2 = M2C_FIELD(temp_s0_2, void **, 0x14);
                        func_001D7D80(temp_s2_2, (s16) ((s64) ((((s64) (func_001D7B80(temp_s2_2) << 0x30) >> 0x30) - 1) << 0x30) >> 0x30));
                        func_001D7C00(temp_s2_2, 1);
                        func_001D7C20(temp_s2_2, 2);
                        func_001D7D60(temp_s2_2, (s8) M2C_FIELD(D_00A7DDF8, u8 *, 1));
                        func_001D7D60(M2C_FIELD(temp_s0_2, void **, 0), 0);
                        func_001D7D60(M2C_FIELD(temp_s0_2, void **, 4), 0);
                        func_001D7D60(M2C_FIELD(temp_s0_2, void **, 8), 0);
                        func_001D7D60(M2C_FIELD(temp_s0_2, void **, 0xC), 0);
                        func_0099D2A0(M2C_FIELD(temp_s0_2, s32 *, 0x10), 0);
                    }
                }
                var_s1_2 += 1;
                goto loop_25;
            }
        }
        return 1;
    }
    return 0;
}
