/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(u16 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_001C48E8(u16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
void *func_0082C2A0();                              /* extern */
s32 func_00936B90();                                /* extern */
extern char D_008A5F70[];

s32 func_0094EF00(void) {
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s5;
    u16 *temp_s2;
    u16 *var_s4;
    u16 temp_s6;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == NULL) {
        return 1;
    }
    if (((void *)D_008A5F70) != NULL) {
        temp_s1 = temp_v0 + 0x7828;
        temp_s0 = func_0082C2A0();
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 == 0) {
            goto block_12;
        }
        if (temp_s0 != NULL) {
            var_s4 = temp_v0_2 + 0xDC;
        } else {
block_12:
            var_s4 = NULL;
        }
        if (temp_s1 == NULL) {
            return 1;
        }
        if (var_s4 != NULL) {
            func_001C48E8(var_s4, 0, 0x412);
            *var_s4 = M2C_FIELD(temp_v0, u16 *, 0x7828);
            temp_s6 = *var_s4;
            var_s5 = 0;
loop_25:
            if ((var_s5 & 0xFFFF) < (s32) temp_s6) {
                temp_v1 = var_s5 & 0xFFFF;
                temp_s0_2 = var_s4 + (temp_v1 * 0x68);
                temp_s2 = temp_s0_2 + 2;
                if (temp_s2 != NULL) {
                    temp_s3 = temp_s1 + (temp_v1 * 0x26) + 2;
                    if (temp_s3 != NULL) {
                        func_001C48E8(temp_s2, 0, 0x68);
                        func_001C4730(temp_s2, temp_s3, 0x26);
                        func_001C8590(temp_s0_2 + 0x28, temp_s0_2 + 6, 0x20);
                    }
                }
                var_s5 = (var_s5 + 1) & 0xFFFF;
                goto loop_25;
            }
            return 4;
        }
        return 1;
    }
    return 1;
}
