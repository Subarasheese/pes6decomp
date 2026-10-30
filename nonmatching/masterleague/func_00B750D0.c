/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
extern void func_001D7D60(void *, s8);
s32 func_00224BC0(u8, s32);                         /* extern */
u8 func_0095C390(s32);                              /* extern */
void *func_00970870(s32);                           /* extern */
M2C_UNK func_00973470(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_00973760(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, u8);            /* extern */

void func_00B750D0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s3;
    s32 var_s4;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_5;
    u32 var_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_v0_4;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        var_s4 = 0;
        var_s2 = temp_v0;
        do {
            if (var_s4 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7A1)) {
                temp_v0_2 = func_00B76A10();
                if (temp_v0_2 != 0) {
                    temp_s0 = temp_v0_2 + ((var_s4 & 0xFF) * 4);
                    func_001D7D60(M2C_FIELD(temp_s0, void **, 4), 1);
                    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x604);
                    if (temp_a0 != 0) {
                        func_00973470(temp_a0, 1);
                    }
                }
                temp_s3 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0x7A0), var_s4 & 0xFF) & 0xFFFF;
                temp_v0_3 = func_00B76A10();
                if ((temp_v0_3 != 0) && (temp_s3 & 0xFFFF)) {
                    temp_v0_4 = func_00970870(temp_s3);
                    if (temp_v0_4 != NULL) {
                        temp_s0_2 = temp_v0_3 + ((var_s4 & 0xFF) * 4);
                        func_00973480(M2C_FIELD(temp_s0_2, s32 *, 0x604), (u64) ((s64) M2C_FIELD(temp_v0_4, u8 *, 1) << 0x38) >> 0x3C);
                        func_009737E0(M2C_FIELD(temp_s0_2, s32 *, 0x684), 2, func_0095C390(temp_s3));
                        func_00973760(M2C_FIELD(temp_s0_2, s32 *, 0x684), 0x10);
                        func_009737E0(M2C_FIELD(temp_s0_2, s32 *, 0x704), 3, M2C_FIELD((temp_v0_3 + (var_s4 & 0xFF)), u8 *, 0xAA4));
                    }
                }
            } else {
                temp_v0_5 = func_00B76A10();
                if (temp_v0_5 != 0) {
                    temp_s0_3 = temp_v0_5 + ((var_s4 & 0xFF) * 4);
                    func_001D7D60(M2C_FIELD(temp_s0_3, void **, 4), 0);
                    temp_a0_2 = M2C_FIELD(temp_s0_3, s32 *, 0x604);
                    if (temp_a0_2 != 0) {
                        func_00973470(temp_a0_2, 0);
                    }
                }
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x184), 0);
            }
            var_s4 += 1;
            var_s2 += 4;
        } while (var_s4 < 0x20);
    }
}
