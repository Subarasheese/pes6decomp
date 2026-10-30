/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_0022C1E0(void);
void *func_0022BFF0(s32, u8);                       /* extern */
u8 *func_0022C140(s32);                             /* extern */

void func_00239C70(s32 arg0) {
    s32 temp_a0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 temp_s3;
    u8 var_s0;
    void *temp_s0;
    void *temp_v0_4;

    if (func_00231240() != 1) {
        temp_v0 = func_0022C140(arg0);
        if (temp_v0 != NULL) {
            *temp_v0 += 1;
            if (func_00231240() != 1) {
                temp_v0_2 = func_0022C140(arg0);
                if (temp_v0_2 != NULL) {
                    temp_s3 = M2C_FIELD(temp_v0_2, u8 *, 0);
                    temp_s0 = func_0022C1E0();
                    if (func_00231240() != 1) {
                        temp_v0_3 = func_0022C140(arg0);
                        if (temp_s0 == NULL) {
                            var_s0 = 0xFF;
                        } else if (temp_v0_3 != NULL) {
                            temp_a0 = (M2C_FIELD(temp_v0_3, u8 *, 6) + (temp_s3 & 0xFF)) & 0xFF;
                            if (temp_a0 < 0xC2) {
                                var_s0 = M2C_FIELD((temp_a0 + temp_s0), u8 *, 2);
                            } else {
                                var_s0 = 0xFF;
                            }
                        } else {
                            var_s0 = 0xFF;
                        }
                    } else {
                        var_s0 = 0xFF;
                    }
                    if ((var_s0 & 0xFF) != 0xFF) {
                        temp_v0_4 = func_0022BFF0(arg0, var_s0);
                        if (temp_v0_4 != NULL) {
                            M2C_FIELD(temp_v0_2, u8 *, 3) = var_s0;
                            M2C_FIELD(temp_v0_2, u8 *, 2) = (u8) M2C_FIELD(temp_v0_4, u8 *, 1);
                        }
                    }
                }
            }
        }
    }
}
