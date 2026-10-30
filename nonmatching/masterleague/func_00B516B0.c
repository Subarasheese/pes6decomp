/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B526C0(void);
extern void func_001D7D60(void *, s8);
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_0095C390(s32);                             /* extern */
void *func_00970870(s32);                           /* extern */
M2C_UNK func_00973470(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_00973760(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00B02A20(s32);                             /* extern */

void func_00B516B0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 var_s3;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_5;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_v0_4;

    temp_v0 = func_00B526C0();
    if (temp_v0 != 0) {
        var_s3 = 0;
        do {
            if (var_s3 < (s32) M2C_FIELD(temp_v0, u8 *, 0xD15)) {
                temp_v0_2 = func_00B526C0();
                if (temp_v0_2 != 0) {
                    temp_s0 = temp_v0_2 + ((var_s3 & 0xFF) * 4);
                    func_001D7D60(M2C_FIELD(temp_s0, void **, 4), 1);
                    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x284);
                    if (temp_a0 != 0) {
                        func_00973470(temp_a0, 1);
                    }
                }
                temp_s2 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0xD14), var_s3 & 0xFF) & 0xFFFF;
                temp_v0_3 = func_00B526C0();
                if ((temp_v0_3 != 0) && (temp_s2 & 0xFFFF)) {
                    temp_v0_4 = func_00970870(temp_s2);
                    if (temp_v0_4 != NULL) {
                        temp_s0_2 = temp_v0_3 + ((var_s3 & 0xFF) * 4);
                        func_00973480(M2C_FIELD(temp_s0_2, s32 *, 0x284), (u64) ((s64) M2C_FIELD(temp_v0_4, u8 *, 1) << 0x38) >> 0x3C);
                        func_009737E0(M2C_FIELD(temp_s0_2, s32 *, 0x304), 0, func_0095C390(temp_s2));
                        func_00973760(M2C_FIELD(temp_s0_2, s32 *, 0x304), 0x10);
                        func_009737E0(M2C_FIELD(temp_s0_2, s32 *, 0x384), 1, func_00B02A20(temp_s2) & 0xFF);
                    }
                }
            } else {
                temp_v0_5 = func_00B526C0();
                if (temp_v0_5 != 0) {
                    temp_s0_3 = temp_v0_5 + ((var_s3 & 0xFF) * 4);
                    func_001D7D60(M2C_FIELD(temp_s0_3, void **, 4), 0);
                    temp_a0_2 = M2C_FIELD(temp_s0_3, s32 *, 0x284);
                    if (temp_a0_2 != 0) {
                        func_00973470(temp_a0_2, 0);
                    }
                }
            }
            var_s3 += 1;
        } while (var_s3 < 0x20);
    }
}
