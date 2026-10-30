/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void func_001D7C00(void *, s8);
extern s16 func_001D7B80(void *);
extern void func_001D7C20(void *, s32);
M2C_UNK func_001C8590(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_0099D2A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009D00A0();                            /* extern */
extern char D_00A02F90[];
extern void *D_00A7DDF8;

s32 func_009D0EB0(s32 arg0) {
    s32 var_s1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_v0;
    void *temp_v0_2;

    if (D_00A7DDF8 == NULL) {
        return 0;
    }
    if (arg0 != 0) {
        var_s1 = 0;
loop_13:
        if (var_s1 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
            temp_v0 = D_00A7DDF8 + (var_s1 << 7);
            temp_s0 = M2C_FIELD(temp_v0, void **, 0x84);
            if (M2C_FIELD(temp_v0, s32 *, 8) == arg0) {
                if (M2C_FIELD(temp_s0, u8 *, 0x31) == 4) {
                    M2C_FIELD(temp_s0, u8 *, 0x31) = 5U;
                    func_009D00A0();
                }
                M2C_FIELD(temp_s0, u8 *, 0x31) = 3U;
                temp_s3 = M2C_FIELD(temp_s0, void **, 0x14);
                func_001D7C20(temp_s3, 0);
                func_001D7D80(temp_s3, 0);
                func_001D7D60(temp_s3, 0);
                temp_s3_2 = M2C_FIELD(temp_s0, void **, 0x14);
                func_001D7D80(temp_s3_2, (s16) ((s64) ((((s64) (func_001D7B80(temp_s3_2) << 0x30) >> 0x30) - 1) << 0x30) >> 0x30));
                func_001D7C00(temp_s3_2, 1);
                func_001D7C20(temp_s3_2, 2);
                func_001D7D60(temp_s3_2, (s8) M2C_FIELD(D_00A7DDF8, u8 *, 1));
                func_001D7D60(M2C_FIELD(temp_s0, void **, 0), 0);
                func_001D7D60(M2C_FIELD(temp_s0, void **, 4), 0);
                func_001D7D60(M2C_FIELD(temp_s0, void **, 8), 0);
                func_001D7D60(M2C_FIELD(temp_s0, void **, 0xC), 0);
                func_0099D2A0(M2C_FIELD(temp_s0, s32 *, 0x10), 0);
            }
            temp_v0_2 = D_00A7DDF8 + (var_s1 * 0x7C);
            temp_s0_2 = temp_v0_2 + 0x408;
            if (M2C_FIELD(temp_v0_2, s32 *, 0x408) == arg0) {
                M2C_FIELD(temp_v0_2, s32 *, 0x408) = 0;
                func_001C8590(temp_s0_2 + 4, ((void *)D_00A02F90), 0x30);
                func_001C8590(temp_s0_2 + 0x35, ((void *)D_00A02F90), 0x30);
                M2C_FIELD(temp_s0_2, s32 *, 0x68) = 0;
                M2C_FIELD(temp_s0_2, s32 *, 0x6C) = 0;
                M2C_FIELD(temp_s0_2, s32 *, 0x70) = 0;
                M2C_FIELD(temp_s0_2, s32 *, 0x74) = 0;
                M2C_FIELD(temp_s0_2, s8 *, 0x78) = 6;
                M2C_FIELD(temp_s0_2, s8 *, 0x79) = 0;
                M2C_FIELD(temp_s0_2, s8 *, 0x7A) = 3;
            }
            var_s1 += 1;
            goto loop_13;
        }
    }
    return 1;
}
