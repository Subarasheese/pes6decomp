/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
extern void func_001D7D80(void *, s16);
s32 func_00225680(u8, M2C_UNK);                     /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C390(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_00973760(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
void *func_00994670(u8, s32);                       /* extern */
void *func_00994C60(u8, u8);                        /* extern */

void func_00B48080(void) {
    s32 temp_fp;
    s32 var_s3;
    s32 var_s5;
    s32 var_s7;
    u16 temp_s2;
    u32 temp_v0;
    u64 temp_a0_2;
    u64 temp_v1;
    u8 temp_a0;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_s4;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        var_s3 = 0;
        var_s5 = 0;
loop_2:
        if ((var_s3 & 0xFF) < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C1)) {
            var_s4 = func_00994670(M2C_FIELD(temp_v0, u8 *, 0x7BC), var_s5 & 0xFF);
            if (var_s4 != NULL) {
                var_s7 = 0;
loop_5:
                if ((var_s3 & 0xFF) < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C1)) {
                    temp_a0 = M2C_FIELD(var_s4, u8 *, 0);
                    if (temp_a0 != 0xFF) {
                        temp_v0_2 = func_00994C60(temp_a0, M2C_FIELD(var_s4, u8 *, 1));
                        if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, u16 *, 4) != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 0) << 0x35) >> 0x3C) == 2)) {
                            temp_a0_2 = (u64) ((s64) (u8) M2C_FIELD(temp_v0_2, u16 *, 0) << 0x39) >> 0x3A;
                            if ((temp_a0_2 != 5) && (temp_a0_2 != 4) && (temp_a0_2 != 3) && (temp_a0_2 != 2)) {

                            } else {
                                temp_s2 = M2C_FIELD(temp_v0_2, u16 *, 4);
                                temp_fp = func_00225680(M2C_FIELD(var_s4, u8 *, 0), 2) & 0xFFFF;
                                temp_v0_3 = func_00970870(temp_s2);
                                if (temp_v0_3 != NULL) {
                                    temp_v1 = (u64) ((s64) (u8) M2C_FIELD(temp_v0_2, u16 *, 0) << 0x39) >> 0x3A;
                                    switch (temp_v1) { /* irregular */
                                    case 2:
                                        func_001D7D80(M2C_FIELD((temp_v0 + ((var_s3 & 0xFF) * 4)), void **, 0x94), 0);
                                        break;
                                    case 3:
                                        func_001D7D80(M2C_FIELD((temp_v0 + ((var_s3 & 0xFF) * 4)), void **, 0x94), 1);
                                        break;
                                    case 4:
                                        func_001D7D80(M2C_FIELD((temp_v0 + ((var_s3 & 0xFF) * 4)), void **, 0x94), 2);
                                        break;
                                    case 5:
                                        func_001D7D80(M2C_FIELD((temp_v0 + ((var_s3 & 0xFF) * 4)), void **, 0x94), 3);
                                        break;
                                    }
                                    temp_s0 = temp_v0 + ((var_s3 & 0xFF) * 4);
                                    func_00973480(M2C_FIELD(temp_s0, s32 *, 0x194), (u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x38) >> 0x3C);
                                    func_009737E0(M2C_FIELD(temp_s0, s32 *, 0x294), 0x11, func_0095C390(temp_s2));
                                    func_00973760(M2C_FIELD(temp_s0, s32 *, 0x294), 0x10);
                                    func_00956A90(M2C_FIELD(temp_s0, s32 *, 0x314), 1, temp_fp & 0xFFFF, 0);
                                    var_s3 = (var_s3 + 1) & 0xFF;
                                }
                            }
                        }
                    }
                    var_s7 += 1;
                    var_s4 += 2;
                    if (var_s7 < 0x48) {
                        goto loop_5;
                    }
                }
            }
            var_s5 += 1;
            if (var_s5 < 0x25) {
                goto loop_2;
            }
        }
    }
}
