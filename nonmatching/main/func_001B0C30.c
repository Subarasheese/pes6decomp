/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017F880(void);
extern u8 D_003E98E4;
extern char D_00522350[];

void func_001B0C30(u8 *arg0, s32 arg1) {
    s32 var_s1;
    u8 temp_a2;
    u8 temp_v1_2;
    void **temp_v1;
    void *temp_s0;

    temp_a2 = *arg0;
    temp_v1 = ((void *)D_00522350) + (temp_a2 * 4);
    temp_s0 = *temp_v1;
    if (((s32) temp_a2 < 0x17) && (temp_s0 != NULL)) {
        *temp_v1 = NULL;
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x65) - 1;
        M2C_FIELD(temp_s0, u8 *, 0x65) = temp_v1_2;
        if ((temp_v1_2 & 0xFF) > 0) {
            return;
        }
        if (arg1 != 0) {
            if (M2C_FIELD(temp_s0, u8 *, 0x64) == 1) {
                var_s1 = 0;
                if ((s32) M2C_FIELD(temp_s0, u8 *, 0x67) > 0) {
                    do {
                        func_0017F880();
                        var_s1 += 1;
                    } while (var_s1 < (s32) M2C_FIELD(temp_s0, u8 *, 0x67));
                }
                M2C_FIELD(temp_s0, s8 *, 0x10) = 4;
                M2C_FIELD(temp_s0, u8 *, 0x64) = 0U;
            }
            M2C_FIELD(temp_s0, u8 *, 0x65) = 0U;
            D_003E98E4 = M2C_FIELD(temp_s0, u8 *, 0x66);
        }
        M2C_FIELD(temp_s0, u8 *, 0x65) = 0U;
    }
}
