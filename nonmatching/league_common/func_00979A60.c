/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
extern s32 func_002293F0(void);
s32 func_00225B20(u8);                              /* extern */
s32 func_00236680(s32);                             /* extern */
s32 func_00239E40(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0094CE70();                            /* extern */
M2C_UNK func_0094CF50();                            /* extern */
M2C_UNK func_0095FE70();                            /* extern */
M2C_UNK func_009869E0();                            /* extern */
extern void *D_003E77B0;

void func_00979A60(void) {
    s32 temp_a2;
    s32 temp_s2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v1;
    u32 temp_v1;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 temp_s0;
    u8 var_s3_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s2 = func_002293F0();
    temp_v0 = func_00229380();
    if ((temp_v0 != NULL) && (temp_s2 != 0)) {
        temp_v1 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
        if (((u64) ((s64) temp_v1 << 0x20) >> 0x20) & 0x4000) {
            M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (temp_v1 & ~8);
        }
        var_s3 = 0;
        M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) & ~0x4000);
loop_5:
        temp_s0 = func_00239E40(1, var_s3) & 0xFF;
        if (func_00225B20(temp_s0) != 1) {
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 >= 2) {

            } else {
                goto loop_5;
            }
        }
        var_s3_2 = 0;
loop_9:
        temp_a0 = temp_s2 + (func_00236680(((var_s3_2 & 0xFF) + 1) & 0xFF) & 0xFF);
        if (*temp_a0 != 0xFF) {
            var_s3_2 = (var_s3_2 + 1) & 0xFF;
            if (var_s3_2 >= 8) {

            } else {
                goto loop_9;
            }
        } else {
            *temp_a0 = temp_s0;
        }
        if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
            temp_v0_2 = func_00229380();
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, u8 *, 4) = (u8) (M2C_FIELD(temp_v0_2, u8 *, 4) | 0x20);
            }
        }
        func_0095FE70();
        func_009869E0();
        func_0094CF50();
        func_0094CE70();
        temp_v0_3 = func_00229380();
        if (temp_v0_3 != NULL) {
            if (!(M2C_FIELD(temp_v0_3, u8 *, 4) & 0x20)) {
                var_v1 = 0;
            } else {
                var_v1 = 1;
            }
        } else {
            var_v1 = 0;
        }
        if ((var_v1 & 0xFF) == 1) {
            var_s0 = 0;
            var_s3_3 = 7;
            do {
                var_a3 = 0;
                temp_a2 = temp_s2 + (func_00236680(((var_s0 & 0xFF) + 1) & 0xFF) & 0xFF);
loop_29:
                temp_a1 = temp_a2 + (var_a3 & 0xFF);
                if (*temp_a1 == 0xFF) {
                    *temp_a1 = var_s3_3;
                    var_s3_3 = (var_s3_3 + 1) & 0xFF;
                }
                var_a3 = (var_a3 + 1) & 0xFF;
                if (var_a3 < 4) {
                    goto loop_29;
                }
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < 8);
        }
        M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0, u8 *, 6) & ~0x10) | 0x10);
    }
}
