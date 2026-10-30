/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226D60(void);
extern void * func_00228A80(void);
void *func_00223E00(u16);                           /* extern */
s32 func_0096E890(u16);                             /* extern */
s32 func_00B02A20(u16);                             /* extern */
s32 func_00B04DF0(u16);                             /* extern */

void func_00B2B450(void) {
    s32 var_s2;
    u16 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a1;
    void *temp_v0;
    void *var_s1;

    var_s1 = func_00228A80();
    if (var_s1 != NULL) {
        var_s2 = 0;
        do {
            temp_a0 = M2C_FIELD(var_s1, u16 *, 0x32EEE);
            if (temp_a0 != 0) {
                temp_v0 = func_00223E00(temp_a0);
                if (temp_v0 != NULL) {
                    if ((func_00B02A20(M2C_FIELD(var_s1, u16 *, 0x32EEE)) & 0xFF) >= 0x24) {
                        M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0, u8 *, 6) & ~0x3F) | 3);
                    }
                    temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 6);
                    if ((temp_a0_2 & 0x3F) == 1) {
                        M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((temp_a0_2 & ~0x3F) | 2);
                    }
                    temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 6);
                    if ((temp_a0_3 & 0x3F) == 5) {
                        M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((temp_a0_3 & ~0x3F) | 6);
                    }
                    if (((func_0096E890(M2C_FIELD(var_s1, u16 *, 0x32EEE)) == 1) || (func_00B04DF0(M2C_FIELD(var_s1, u16 *, 0x32EEE)) == 1)) && (func_00226D60() == 0)) {
                        temp_a1 = M2C_FIELD(temp_v0, u8 *, 6);
                        if ((temp_a1 & 0x3F) == 8) {
                            M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((temp_a1 & ~0x3F) | (0 & 0x3F));
                        }
                    }
                    M2C_FIELD(var_s1, u16 *, 0x32EEE) = 0U;
                }
            }
            var_s2 += 1;
            var_s1 += 2;
        } while (var_s2 < 0x3E8);
    }
}
