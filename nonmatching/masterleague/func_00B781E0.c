/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern u32 func_00B77B10(void);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C390(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
M2C_UNK func_00973470(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_00973760(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
s32 func_00B02A20(u16);                             /* extern */
M2C_UNK func_00B77D70(s32, s16, s64);               /* extern */

void func_00B781E0(void) {
    f32 var_f0;
    s16 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s4;
    u16 temp_s5;
    u16 temp_s7;
    u32 temp_v0;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u8 temp_s0_5;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B77B10();
    if (temp_v0 != 0) {
        var_s4 = 0;
        do {
            temp_s0 = var_s4 & 0xFF;
            if (temp_s0 < (s32) M2C_FIELD(temp_v0, u8 *, 0x520)) {
                temp_v0_2 = temp_v0 + (temp_s0 * 2);
                temp_s5 = M2C_FIELD(temp_v0_2, u16 *, 0x522);
                temp_s7 = M2C_FIELD(temp_v0_2, u16 *, 0x562);
                temp_v0_3 = func_00970870(temp_s5);
                if (temp_v0_3 != NULL) {
                    temp_s1 = temp_s0 * 4;
                    temp_s0_2 = temp_v0 + temp_s1;
                    func_009737E0(M2C_FIELD(temp_s0_2, s32 *, 0x188), 2, func_0095C390(temp_s5));
                    func_00973760(M2C_FIELD(temp_s0_2, s32 *, 0x188), 0x10);
                    func_009737E0(M2C_FIELD(temp_s0_2, s32 *, 0x208), 4, func_00B02A20(temp_s5) & 0xFF);
                    func_00956A90(M2C_FIELD(temp_s0_2, s32 *, 0x88), 4, temp_s7 & 0xFFFF, 0);
                    func_00973480(M2C_FIELD(temp_s0_2, s32 *, 0x108), (u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x38) >> 0x3C);
                    temp_v0_4 = func_00B77B10();
                    if (temp_v0_4 != 0) {
                        temp_s0_3 = temp_v0_4 + temp_s1;
                        func_001D7D60(M2C_FIELD(temp_s0_3, void **, 8), 1);
                        func_00973470(M2C_FIELD(temp_s0_3, s32 *, 0x108), 1);
                        func_00956A80(M2C_FIELD(temp_s0_3, s32 *, 0x88), 1);
                    }
                }
            } else {
                temp_v0_5 = func_00B77B10();
                if (temp_v0_5 != 0) {
                    temp_s0_4 = temp_v0_5 + (temp_s0 * 4);
                    func_001D7D60(M2C_FIELD(temp_s0_4, void **, 8), 0);
                    func_00973470(M2C_FIELD(temp_s0_4, s32 *, 0x108), 0);
                    func_00956A80(M2C_FIELD(temp_s0_4, s32 *, 0x88), 0);
                }
            }
            var_s4 = (var_s4 + 1) & 0xFF;
        } while (var_s4 < 0x20);
        temp_s0_5 = M2C_FIELD(temp_v0, u8 *, 0x520);
        if ((s32) temp_s0_5 >= 7) {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x310), 1U);
            if ((s32) temp_s0_5 < 0) {
                var_f0 = 2.0f * (f32) ((temp_s0_5 >> 1) | (temp_s0_5 & 1));
            } else {
                var_f0 = (f32) temp_s0_5;
            }
            func_0097F970(M2C_FIELD(temp_v0, s32 *, 0x310), 0, 6.0f / var_f0);
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x5A4);
            func_00B77D70(-(s32) M2C_FIELD(temp_v0, u8 *, 0x5A2), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x310), 0U);
        }
    }
}
