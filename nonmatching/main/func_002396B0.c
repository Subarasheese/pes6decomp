/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_0022C1E0(void);
s32 func_00225940(u8);                              /* extern */
void *func_0022C140(s32);                           /* extern */

void func_002396B0(s32 arg0) {
    s32 temp_v1;
    s32 var_s3;
    s8 var_s2;
    u8 var_a0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = func_0022C1E0();
    if ((func_00231240() != 1) && (temp_s0 != NULL)) {
        temp_v0 = func_0022C140(arg0);
        if (temp_v0 != NULL) {
            var_s3 = 0;
            var_s2 = 0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 9) > 0) {
                do {
                    temp_s0_2 = func_0022C1E0();
                    if (func_00231240() == 1) {
                        var_a0 = 0xFF;
                    } else {
                        temp_v0_2 = func_0022C140(arg0);
                        if (temp_s0_2 == NULL) {
                            var_a0 = 0xFF;
                        } else if (temp_v0_2 == NULL) {
                            var_a0 = 0xFF;
                        } else {
                            temp_v1 = (M2C_FIELD(temp_v0_2, u8 *, 8) + (var_s3 & 0xFF)) & 0xFF;
                            if (temp_v1 >= 0x60) {
                                var_a0 = 0xFF;
                            } else {
                                var_a0 = M2C_FIELD((temp_s0_2 + temp_v1), u8 *, 0xC4);
                            }
                        }
                    }
                    if (func_00225940(var_a0) & 0xFF) {
                        var_s2 += 1;
                    }
                    var_s3 += 1;
                } while (var_s3 < (s32) M2C_FIELD(temp_v0, u8 *, 9));
            }
            M2C_FIELD(temp_v0, s8 *, 0xA) = var_s2;
        }
    }
}
