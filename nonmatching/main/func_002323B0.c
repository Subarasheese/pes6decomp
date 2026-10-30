/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
u8 func_002323B0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a5;
    u8 temp_a1;
    u8 temp_a4;
    void *temp_s0;
    void *temp_t0;

    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 0U;
    }
    if (temp_s0 != NULL) {
        temp_v1 = arg0 & 0xFF;
        var_a5 = 0;
        var_a0 = 0;
        if (temp_v1 > 0) {
            if (temp_v1 >= 9) {
                var_a2 = 0;
                if ((temp_v1 >= 0) && (temp_v1 < 0x7FFFFFFF)) {
                    var_a2 = 1;
                }
                if (var_a2 != 0) {
                    do {
                        temp_t0 = temp_s0 + var_a0;
                        temp_a4 = M2C_FIELD(temp_t0, u8 *, 0x4616);
                        var_a0 += 8;
                        var_a5 = (((((((((((((((var_a5 + temp_a4) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4617)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4618)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4619)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x461A)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x461B)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x461C)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x461D)) & 0xFF;
                    } while (var_a0 < (temp_v1 - 8));
                }
            }
            if (var_a0 < temp_v1) {
                do {
                    temp_a1 = M2C_FIELD((temp_s0 + var_a0), u8 *, 0x4616);
                    var_a0 += 1;
                    var_a5 = (var_a5 + temp_a1) & 0xFF;
                } while (var_a0 < temp_v1);
            }
        }
        return M2C_FIELD(((((var_a5 + arg1) & 0xFF) * 0xC) + temp_s0), u8 *, 0x4AB8);
    }
    return 0U;
}
