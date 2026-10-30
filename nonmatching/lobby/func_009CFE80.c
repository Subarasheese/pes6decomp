/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7C00(void *, s8);
extern void func_001D7C20(void *, s32);
M2C_UNK func_001C8590(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_0099D2A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009CECE0(void *, M2C_UNK, s32);        /* extern */
extern char D_00A02F90[];
extern void *D_00A7DDF8;

void func_009CFE80(void) {
    s32 *temp_s0;
    s32 *temp_s1;
    s32 *var_a0;
    s32 *var_a1;
    s32 var_a2;
    s32 var_a4;
    s32 var_a5;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_s0_2;
    void *temp_s3;
    void *temp_v1_2;
    void *temp_v1_3;

    var_a4 = 0;
    var_a5 = 0;
loop_8:
    if (var_a5 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
        temp_v1 = M2C_FIELD(M2C_FIELD((D_00A7DDF8 + (var_a5 << 7)), void **, 0x84), u8 *, 0x31);
        if (temp_v1 == 3) {
            var_v1 = 0;
        } else {
            if (temp_v1 == 0) {
                var_a4 = 1;
                goto block_7;
            }
            if (var_a4 != 0) {
                var_v1 = 0;
            } else {
block_7:
                var_a5 += 1;
                goto loop_8;
            }
        }
    } else {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        var_s2 = 0;
loop_26:
        temp_a1 = M2C_FIELD(D_00A7DDF8, u8 *, 7);
        if (var_s2 < (s32) temp_a1) {
            temp_v1_2 = D_00A7DDF8 + (var_s2 * 0x7C);
            temp_s1 = temp_v1_2 + 0x408;
            if (M2C_FIELD(temp_v1_2, s32 *, 0x408) != 0) {
                var_a2 = 0;
loop_22:
                if (var_a2 < (s32) temp_a1) {
                    temp_v1_3 = D_00A7DDF8 + (var_a2 << 7);
                    temp_s0 = temp_v1_3 + 8;
                    if (M2C_FIELD(M2C_FIELD(temp_v1_3, void **, 0x84), u8 *, 0x31) != 0) {
                        var_a2 += 1;
                        goto loop_22;
                    }
                    var_v1_2 = 0x1F;
                    var_a1 = temp_s1;
                    var_a0 = temp_s0;
                    do {
                        var_v1_2 -= 1;
                        *var_a0 = *var_a1;
                        var_a1 += 4;
                        var_a0 += 4;
                    } while (var_v1_2 > 0);
                    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x7C), s8 *, 0x31) = 1;
                    func_009CECE0(M2C_FIELD(temp_s0, void **, 0x7C), 0, var_a2);
                    temp_s0_2 = M2C_FIELD(temp_s0, void **, 0x7C);
                    temp_s3 = M2C_FIELD(temp_s0_2, void **, 0x14);
                    func_001D7C00(temp_s3, 0);
                    func_001D7C20(temp_s3, 2);
                    func_001D7D60(temp_s3, (s8) M2C_FIELD(D_00A7DDF8, u8 *, 1));
                    func_001D7D60(M2C_FIELD(temp_s0_2, void **, 0), 0);
                    func_001D7D60(M2C_FIELD(temp_s0_2, void **, 4), 0);
                    func_001D7D60(M2C_FIELD(temp_s0_2, void **, 8), 0);
                    func_001D7D60(M2C_FIELD(temp_s0_2, void **, 0xC), 0);
                    func_0099D2A0(M2C_FIELD(temp_s0_2, s32 *, 0x10), 0);
                    M2C_FIELD(temp_v1_2, s32 *, 0x408) = 0;
                    func_001C8590(temp_s1 + 4, ((void *)D_00A02F90), 0x30);
                    func_001C8590(temp_s1 + 0x35, ((void *)D_00A02F90), 0x30);
                    M2C_FIELD(temp_s1, s32 *, 0x68) = 0;
                    M2C_FIELD(temp_s1, s32 *, 0x6C) = 0;
                    M2C_FIELD(temp_s1, s32 *, 0x70) = 0;
                    M2C_FIELD(temp_s1, s32 *, 0x74) = 0;
                    M2C_FIELD(temp_s1, s8 *, 0x78) = 6;
                    M2C_FIELD(temp_s1, s8 *, 0x79) = 0;
                    M2C_FIELD(temp_s1, s8 *, 0x7A) = 3;
                }
            }
            var_s2 += 1;
            goto loop_26;
        }
    }
}
