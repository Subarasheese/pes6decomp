/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9A50(void *, s32);
extern void func_001D7D60(void *, s8);
extern s32 func_001F3D10(s32, u8);
extern u32 func_00B035D0(void);
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_0097FA10(s32, s16, f32);               /* extern */
s32 func_00B01540(u8);                              /* extern */

void func_00AF7D90(s32 arg0) {
    f32 var_f1;
    f32 var_f2;
    s16 temp_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_v0;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v1;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s4;
    void *temp_s4_2;
    void *temp_s4_3;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        temp_a0 = func_00B01540(M2C_FIELD(temp_v0, u8 *, 0x5C4)) & 0xFF;
        if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 0) {
            var_v0 = 5;
        } else {
            var_v0 = 0;
        }
        if ((arg0 & 0xFF) != 1) {
            func_001B9A50(M2C_FIELD(temp_v0, void **, 0x270), 1);
            var_s0 = 0;
            do {
                temp_s1 = temp_v0 + ((var_s0 & 0xFF) * 4);
                func_001D7D60(M2C_FIELD(temp_s1, void **, 0x29AAC), 0);
                func_001D7D60(M2C_FIELD(temp_s1, void **, 0x29A5C), 0);
                func_009737C0(M2C_FIELD(temp_s1, s32 *, 0x29AFC), 0);
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < 0x14);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29A58), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x29DD4), 0);
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x29DD0), 0);
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x29DD8), 0U);
            func_001B9A50(M2C_FIELD(temp_v0, void **, 0x29DCC), 0);
        } else {
            var_s3 = 0;
            do {
                temp_a0_2 = var_s3 & 0xFF;
                if ((temp_a0_2 < (temp_a0 & 0xFF)) && (temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5D0), ((temp_a0_2 < (s32) temp_v1) == 0)) && (temp_a0_2 < (temp_v1 + 0xB))) {
                    if (M2C_FIELD((temp_v0 + (((temp_a0_2 + (M2C_FIELD(temp_v0, u8 *, 0x5C4) * 0x17)) - (var_v0 & 0xFF & 0xFF)) * 0x1C)), u16 *, 0xA0C) == 0) {
                        temp_s4 = temp_v0 + (temp_a0_2 * 4);
                        func_001D7D60(M2C_FIELD(temp_s4, void **, 0x10), 0);
                        func_001D7D60(M2C_FIELD(temp_s4, void **, 0x1EC), 0);
                    } else {
                        temp_s4_2 = temp_v0 + (temp_a0_2 * 4);
                        func_001D7D60(M2C_FIELD(temp_s4_2, void **, 0x10), 1);
                        func_001D7D60(M2C_FIELD(temp_s4_2, void **, 0x1EC), 1);
                    }
                } else {
                    temp_s4_3 = temp_v0 + ((var_s3 & 0xFF) * 4);
                    func_001D7D60(M2C_FIELD(temp_s4_3, void **, 0x10), 0);
                    func_001D7D60(M2C_FIELD(temp_s4_3, void **, 0x124), 0);
                    func_001D7D60(M2C_FIELD(temp_s4_3, void **, 0x1EC), 0);
                }
                var_s3 = (var_s3 + 1) & 0xFF;
            } while (var_s3 < 0x17);
            var_s0_2 = 0;
            do {
                temp_s1_2 = temp_v0 + ((var_s0_2 & 0xFF) * 4);
                func_001D7D60(M2C_FIELD(temp_s1_2, void **, 0x29AAC), 1);
                func_001D7D60(M2C_FIELD(temp_s1_2, void **, 0x29A5C), 1);
                func_009737C0(M2C_FIELD(temp_s1_2, s32 *, 0x29AFC), 1);
                var_s0_2 = (var_s0_2 + 1) & 0xFF;
            } while (var_s0_2 < 0x14);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29A58), 1);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x29DD4), 1);
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x29DD0), 1);
            if (M2C_FIELD(temp_v0, s32 *, 0x5E4) != 4) {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x29DD8), 0U);
            } else {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x29DD8), 1U);
                temp_v0_2 = func_00B035D0();
                if (temp_v0_2 != 0) {
                    temp_a1 = M2C_FIELD(temp_v0_2, s16 *, 0x29DDC);
                    temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 0x890);
                    if ((s32) temp_v0_3 >= 0) {
                        var_f2 = (f32) temp_v0_3;
                    } else {
                        var_f2 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
                    }
                    func_0097FA10(M2C_FIELD(temp_v0_2, s32 *, 0x29DD8), temp_a1, (f32) ((M2C_FIELD(temp_v0_2, u8 *, 0x29DE4) * temp_a1) - M2C_FIELD(temp_v0_2, s16 *, 0x29DE0)) / ((var_f2 - 10.0f) * (f32) temp_a1));
                    temp_v0_4 = M2C_FIELD(temp_v0_2, u8 *, 0x890);
                    if ((s32) temp_v0_4 < 0) {
                        var_f1 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
                    } else {
                        var_f1 = (f32) temp_v0_4;
                    }
                    func_0097F970(M2C_FIELD(temp_v0_2, s32 *, 0x29DD8), 0, 10.0f / var_f1);
                }
            }
            func_001B9A50(M2C_FIELD(temp_v0, void **, 0x270), 0);
            func_001B9A50(M2C_FIELD(temp_v0, void **, 0x29DCC), 1);
        }
    }
}
