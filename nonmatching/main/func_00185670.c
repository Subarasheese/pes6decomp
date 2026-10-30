/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(M2C_UNK, void *);                 /* extern */
extern void *D_0051FFB8;

void func_00185670(void) {
    s16 *var_a1;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 var_v1;

    if (M2C_FIELD(D_0051FFB8, u8 *, 3) != 0) {
        if (M2C_FIELD(D_0051FFB8, s16 *, 0) == 1) {
            M2C_FIELD(D_0051FFB8, s16 *, 0xA) = (s16) (M2C_FIELD(D_0051FFB8, s16 *, 0xA) - 1);
            if (M2C_FIELD(D_0051FFB8, s16 *, 0xA) < 0) {
                M2C_FIELD(D_0051FFB8, s16 *, 0xA) = (s16) (((func_00151EA0(2, D_0051FFB8) & 0xFFFF) + 2) * 0xE10);
                if (M2C_FIELD(D_0051FFB8, s16 *, 6) == 0) {
                    M2C_FIELD(D_0051FFB8, s16 *, 4) = 0x48;
                } else {
                    M2C_FIELD(D_0051FFB8, s16 *, 4) = 0;
                }
            }
        }
        if (M2C_FIELD(D_0051FFB8, s16 *, 6) != M2C_FIELD(D_0051FFB8, s16 *, 4)) {
            temp_a0 = M2C_FIELD(D_0051FFB8, s16 *, 8);
            var_a1 = D_0051FFB8 + 8;
            if (temp_a0 >= 0x3C) {
                M2C_FIELD(D_0051FFB8, s16 *, 8) = 0;
                temp_a0_2 = M2C_FIELD(D_0051FFB8, s16 *, 6);
                var_a1 = D_0051FFB8 + 6;
                if (M2C_FIELD(D_0051FFB8, s16 *, 4) < temp_a0_2) {
                    var_v1 = M2C_FIELD(D_0051FFB8, s16 *, 6) - 1;
                } else {
                    var_v1 = temp_a0_2 + 1;
                }
            } else {
                var_v1 = temp_a0 + 1;
            }
            *var_a1 = var_v1;
        }
    }
}
