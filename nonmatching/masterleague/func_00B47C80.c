/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern u32 func_00B45600(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973470(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973940(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_00973C70(s32, s32);                    /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_00B47730(u8, s32, s16, s64);           /* extern */
M2C_UNK func_00B47AB0(u8);                          /* extern */

void func_00B47C80(u8 arg0) {
    f32 var_f1;
    s16 temp_a2;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v0_7;
    u32 temp_v0_8;
    u32 temp_v0_9;
    u8 temp_v0_11;
    void *temp_s5;
    void *temp_s5_2;
    void *temp_s5_3;
    void *temp_s5_4;
    void *temp_s5_5;
    void *temp_s5_6;
    void *temp_v0_10;
    void *var_s1;
    void *var_s3_2;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        temp_v1 = arg0 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 0:
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 8), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0xC), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x10), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x394), 1);
            temp_v0_2 = arg0 & 0xFF;
            var_s4 = 0;
            var_s3 = temp_v0 + (temp_v0_2 << 9);
            var_s1 = temp_v0 + (temp_v0_2 << 7);
            do {
                if (var_s4 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C0)) {
                    temp_v0_3 = func_00B45600();
                    if (temp_v0_3 != 0) {
                        temp_s5 = temp_v0_3 + ((var_s4 & 0xFF) * 4);
                        func_001D7D60(M2C_FIELD(temp_s5, void **, 0x14), 1);
                        func_00973470(M2C_FIELD(temp_s5, s32 *, 0x114), 1);
                    }
                } else {
                    temp_v0_4 = func_00B45600();
                    if (temp_v0_4 != 0) {
                        temp_s5_2 = temp_v0_4 + ((var_s4 & 0xFF) * 4);
                        func_001D7D60(M2C_FIELD(temp_s5_2, void **, 0x14), 0);
                        func_00973470(M2C_FIELD(temp_s5_2, s32 *, 0x114), 0);
                    }
                }
                temp_v0_5 = func_00B45600();
                if (temp_v0_5 != 0) {
                    temp_s5_3 = temp_v0_5 + ((var_s4 & 0xFF) * 4);
                    func_001D7D60(M2C_FIELD(temp_s5_3, void **, 0x94), 0);
                    func_00973470(M2C_FIELD(temp_s5_3, s32 *, 0x194), 0);
                    func_00956A80(M2C_FIELD(temp_s5_3, s32 *, 0x314), 0);
                }
                func_00973940(M2C_FIELD(temp_v0, s32 *, 0), 1, (var_s4 + 3) & 0xFFFF, var_s3 + 0x3BC);
                func_00973C70(M2C_FIELD(var_s1, s32 *, 0x14), var_s3 + 0x3BC);
                var_s4 += 1;
                var_s3 += 0x10;
                var_s1 += 4;
            } while (var_s4 < 0x20);
            break;
        case 1:
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 8), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0xC), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x10), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x394), 0);
            temp_v0_6 = arg0 & 0xFF;
            var_s1_2 = 0;
            var_s4_2 = temp_v0 + (temp_v0_6 << 9);
            var_s3_2 = temp_v0 + (temp_v0_6 << 7);
            do {
                temp_v0_7 = func_00B45600();
                if (temp_v0_7 != 0) {
                    temp_s5_4 = temp_v0_7 + ((var_s1_2 & 0xFF) * 4);
                    func_001D7D60(M2C_FIELD(temp_s5_4, void **, 0x14), 0);
                    func_00973470(M2C_FIELD(temp_s5_4, s32 *, 0x114), 0);
                }
                if (var_s1_2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C1)) {
                    temp_v0_8 = func_00B45600();
                    if (temp_v0_8 != 0) {
                        temp_s5_5 = temp_v0_8 + ((var_s1_2 & 0xFF) * 4);
                        func_001D7D60(M2C_FIELD(temp_s5_5, void **, 0x94), 1);
                        func_00973470(M2C_FIELD(temp_s5_5, s32 *, 0x194), 1);
                        func_00956A80(M2C_FIELD(temp_s5_5, s32 *, 0x314), 1);
                    }
                } else {
                    temp_v0_9 = func_00B45600();
                    if (temp_v0_9 != 0) {
                        temp_s5_6 = temp_v0_9 + ((var_s1_2 & 0xFF) * 4);
                        func_001D7D60(M2C_FIELD(temp_s5_6, void **, 0x94), 0);
                        func_00973470(M2C_FIELD(temp_s5_6, s32 *, 0x194), 0);
                        func_00956A80(M2C_FIELD(temp_s5_6, s32 *, 0x314), 0);
                    }
                }
                func_00973940(M2C_FIELD(temp_v0, s32 *, 0), 1, (var_s1_2 + 3) & 0xFFFF, var_s4_2 + 0x3BC);
                func_00973C70(M2C_FIELD(var_s3_2, s32 *, 0x14), var_s4_2 + 0x3BC);
                var_s1_2 += 1;
                var_s4_2 += 0x10;
                var_s3_2 += 4;
            } while (var_s1_2 < 0x20);
            break;
        }
        temp_s1 = arg0 & 0xFF;
        temp_v0_10 = temp_s1 + temp_v0;
        if ((s32) M2C_FIELD(temp_v0_10, u8 *, 0x7C0) >= 7) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3A8), 1U);
            temp_v0_11 = M2C_FIELD(temp_v0_10, u8 *, 0x7C0);
            if ((s32) temp_v0_11 < 0) {
                var_f1 = 2.0f * (f32) ((temp_v0_11 >> 1) | (temp_v0_11 & 1));
            } else {
                var_f1 = (f32) temp_v0_11;
            }
            func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x3A8), 0, 6.0f / var_f1);
            temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x7C4);
            func_00B47730(arg0, -(s32) M2C_FIELD((temp_s1 + temp_v0), u8 *, 0x7C2), temp_a2, (s64) ((s64) -temp_a2 << 0x30) >> 0x30);
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3A8), 0U);
        }
        func_00B47730(M2C_FIELD(temp_v0, u8 *, 0x3B6), M2C_FIELD(temp_v0, s32 *, 0x7C8), M2C_FIELD(temp_v0, s16 *, 0x7CC), (s64) M2C_FIELD(temp_v0, s16 *, 0x7CE));
        M2C_FIELD(temp_v0, s8 *, 0x8FD) = 0;
        func_00B47AB0(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x3B6) + temp_v0), u8 *, 0x7D0));
    }
}
