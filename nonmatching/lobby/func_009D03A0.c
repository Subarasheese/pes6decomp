/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void func_001D7C20(void *, s32);
M2C_UNK func_001C8590(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009CE890();                            /* extern */
M2C_UNK func_009CECE0(void *, void *);              /* extern */
M2C_UNK func_009CEED0();                            /* extern */
M2C_UNK func_009CF4A0(s32, s32);                    /* extern */
M2C_UNK func_009CF850(s32);                         /* extern */
extern char D_00A02F90[];
extern void *D_00A7DDF8;

s32 func_009D03A0(u8 arg0) {
    s32 temp_a0;
    s32 var_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_v1;

    if (D_00A7DDF8 == NULL) {
        return 0;
    }
    if (M2C_FIELD(D_00A7DDF8, u8 *, 3) != arg0) {
        M2C_FIELD(D_00A7DDF8, u8 *, 3) = arg0;
        if (D_00A7DDF8 != NULL) {
            func_002DF8E0(M2C_FIELD(D_00A7DDF8, s32 *, 0x9A0), 0);
            M2C_FIELD(D_00A7DDF8, s8 *, 4) = 0xFF;
            func_009CE890();
        }
        temp_a0 = M2C_FIELD(D_00A7DDF8, s32 *, 0x7E8);
        if (temp_a0 == 0) {
            return 0;
        }
        if (arg0 != 0) {
            func_009CF4A0(temp_a0, arg0 == 2);
        } else {
            func_009CF850(temp_a0);
        }
        var_s0 = 0;
loop_22:
        if (var_s0 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
            temp_v1 = D_00A7DDF8 + (var_s0 << 7);
            temp_s1 = temp_v1 + 8;
            if (M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x84), u8 *, 0x31) == 3) {
                M2C_FIELD(temp_v1, s32 *, 8) = 0;
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
            temp_s3 = M2C_FIELD(temp_s1, void **, 0x7C);
            if (M2C_FIELD(temp_v1, s32 *, 8) == 0) {
                M2C_FIELD(temp_s3, s8 *, 0x31) = 0;
            } else {
                M2C_FIELD(temp_s3, s8 *, 0x31) = 2;
            }
            temp_s2 = M2C_FIELD(temp_s3, void **, 0x14);
            func_001D7C20(temp_s2, 0);
            func_001D7D80(temp_s2, 0);
            func_001D7D60(temp_s2, 0);
            func_009CECE0(temp_s3, temp_s1);
            var_s0 += 1;
            goto loop_22;
        }
        func_009CEED0();
        goto block_26;
    }
block_26:
    return 1;
}
