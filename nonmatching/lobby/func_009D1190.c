/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_009CECE0(s32, void *);                 /* extern */
extern char D_00A02F90[];
extern void *D_00A7DDF8;

s32 func_009D1190(void *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a1_2;
    M2C_UNK *var_a1_3;
    M2C_UNK *var_a1_4;
    s32 var_s1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;

    if (D_00A7DDF8 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_s1 = 0;
loop_19:
        if (var_s1 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
            temp_v0 = D_00A7DDF8 + (var_s1 << 7);
            temp_s0 = temp_v0 + 8;
            if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(temp_v0, s32 *, 8)) {
                var_a1 = M2C_FIELD(arg0, M2C_UNK **, 4);
                if (var_a1 == NULL) {
                    var_a1 = ((void *)D_00A02F90);
                }
                func_001C8590(temp_s0 + 4, var_a1, 0x30);
                var_a1_2 = M2C_FIELD(arg0, M2C_UNK **, 8);
                if (var_a1_2 == NULL) {
                    var_a1_2 = ((void *)D_00A02F90);
                }
                func_001C8590(temp_s0 + 0x35, var_a1_2, 0x30);
                M2C_FIELD(temp_s0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
                M2C_FIELD(temp_s0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
                M2C_FIELD(temp_s0, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
                M2C_FIELD(temp_s0, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
                M2C_FIELD(temp_s0, s8 *, 0x78) = (s8) M2C_FIELD(arg0, s32 *, 0x1C);
                M2C_FIELD(temp_s0, s8 *, 0x79) = (s8) M2C_FIELD(arg0, s32 *, 0x20);
                func_009CECE0(M2C_FIELD(temp_s0, s32 *, 0x7C), temp_s0);
            }
            temp_v0_2 = D_00A7DDF8 + (var_s1 * 0x7C);
            temp_s0_2 = temp_v0_2 + 0x408;
            if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(temp_v0_2, s32 *, 0x408)) {
                var_a1_3 = M2C_FIELD(arg0, M2C_UNK **, 4);
                if (var_a1_3 == NULL) {
                    var_a1_3 = ((void *)D_00A02F90);
                }
                func_001C8590(temp_s0_2 + 4, var_a1_3, 0x30);
                var_a1_4 = M2C_FIELD(arg0, M2C_UNK **, 8);
                if (var_a1_4 == NULL) {
                    var_a1_4 = ((void *)D_00A02F90);
                }
                func_001C8590(temp_s0_2 + 0x35, var_a1_4, 0x30);
                M2C_FIELD(temp_s0_2, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
                M2C_FIELD(temp_s0_2, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
                M2C_FIELD(temp_s0_2, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
                M2C_FIELD(temp_s0_2, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
                M2C_FIELD(temp_s0_2, s8 *, 0x78) = (s8) M2C_FIELD(arg0, s32 *, 0x1C);
                M2C_FIELD(temp_s0_2, s8 *, 0x79) = (s8) M2C_FIELD(arg0, s32 *, 0x20);
            }
            var_s1 += 1;
            goto loop_19;
        }
    }
    return 1;
}
