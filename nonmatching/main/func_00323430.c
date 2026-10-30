/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00325930();                                /* extern */

s32 func_00323430(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a7;
    s32 var_s0;
    s32 var_t0;
    void *temp_a4;
    void *var_a5;
    void *var_a6;

    var_s0 = 0;
    if (func_00325930() == 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
        if ((temp_v1 != 0x24) && (temp_v1 != 0x29)) {
            M2C_FIELD(arg0, s32 *, 0x68) = 1;
            M2C_FIELD(arg0, s32 *, 0xA4) = 1;
        } else if (M2C_FIELD(arg0, u8 *, 0xD) == 0) {
            var_s0 = 1;
        }
    } else {
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        var_t0 = 0;
        var_a6 = arg0;
        do {
            var_a7 = 0;
            var_a5 = arg0;
loop_13:
            temp_a4 = var_a5 + 0xA60;
            if (M2C_FIELD(var_a5, u16 *, 0xA60) == M2C_FIELD(var_a6, u16 *, 0x3A)) {
                temp_v0 = M2C_FIELD(temp_a4, s32 *, 4);
                switch (temp_v0) {                  /* irregular */
                case 2:
                    M2C_FIELD(temp_a4, s32 *, 8) = 3;
                    break;
                case 3:
                    M2C_FIELD(temp_a4, s32 *, 8) = 4;
                    break;
                case 4:
                    M2C_FIELD(temp_a4, s32 *, 8) = 5;
                    break;
                case 5:
                    M2C_FIELD(temp_a4, s32 *, 8) = 5;
                    break;
                }
            }
            var_a7 += 1;
            var_a5 += 0xC;
            if (var_a7 < 4) {
                goto loop_13;
            }
            var_t0 += 1;
            var_a6 += 2;
        } while (var_t0 < 2);
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(temp_a4, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(temp_a4, s32 *, 8);
    }
    return 1;
}
