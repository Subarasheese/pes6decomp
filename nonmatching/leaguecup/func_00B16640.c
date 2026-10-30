/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00239BE0(u8);
extern u8 func_00225820(void);
extern s32 func_0022C140(s32);
extern u8 func_0022BC60(s32);
void *func_0022BFF0(M2C_UNK, s32);                  /* extern */
extern void *D_003EAD78;

s32 func_00B16640(void) {
    s32 temp_s1;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 var_s0;
    s32 var_s5;
    u8 temp_a0;
    u8 temp_a2;
    u8 temp_v0_2;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_3;

    var_s0 = 0;
    temp_s2 = D_003EAD78;
    temp_s1 = func_00225820() & 0xFF;
    if (temp_s2 == NULL) {
        return 0;
    }
    temp_v0 = func_0022C140(0);
    temp_v0_2 = func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9));
    M2C_FIELD(temp_s2, u8 *, 0xE08) = temp_v0_2;
    var_s5 = 0;
    if ((s32) M2C_FIELD(temp_v0, u8 *, 5) > 0) {
        temp_s3 = temp_v0_2 & 0xFF & 0xFF;
        temp_s2_2 = temp_s1 & 0xFF;
        do {
            temp_v0_3 = func_0022BFF0(0, var_s5);
            temp_a2 = M2C_FIELD(temp_v0_3, u8 *, 0x16);
            if (((u64) ((s64) temp_a2 << 0x3A) >> 0x3F) == 1) {
                temp_a0 = M2C_FIELD(temp_v0_3, u8 *, 0);
                if ((temp_a0 == (temp_s3 - 1)) && ((var_s0 & 0xFF) != 5)) {
                    if ((((u64) ((s64) temp_a2 << 0x3E) >> 0x3F) == 1) && ((temp_s2_2 == (func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 5)) & 0xFF)) || (temp_s2_2 == (func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 6)) & 0xFF)))) {
                        var_s0 = 4;
                    } else {
                        var_s0 = 3;
                    }
                } else if (temp_a0 == temp_s3) {
                    var_s0 = 5;
                } else if ((var_s0 & 0xFF) < (s32) temp_a0) {
                    var_s0 = temp_a0 & 0xFF;
                }
            }
            var_s5 = (var_s5 + 1) & 0xFF;
        } while (var_s5 < (s32) M2C_FIELD(temp_v0, u8 *, 5));
    }
    return var_s0;
}
