/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
s32 func_00983E70(s32 arg0) {
    s32 temp_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a6;
    u8 temp_a2;
    u8 temp_a5;
    void *temp_t1;
    void *temp_v0;

    temp_v0 = func_00229460();
    temp_a0 = arg0 & 0xFF;
    if (temp_a0 >= 8) {
        return 0;
    }
    if (temp_v0 != NULL) {
        var_a1 = 0;
        var_a6 = 0;
        if (temp_a0 > 0) {
            if (temp_a0 >= 9) {
                var_a2 = 0;
                if ((temp_a0 >= 0) && (temp_a0 < 0x7FFFFFFF)) {
                    var_a2 = 1;
                }
                if (var_a2 != 0) {
                    do {
                        temp_t1 = temp_v0 + var_a1;
                        temp_a5 = M2C_FIELD(temp_t1, u8 *, 0x4616);
                        var_a1 += 8;
                        var_a6 = (((((((((((((((var_a6 + temp_a5) & 0xFF) + M2C_FIELD(temp_t1, u8 *, 0x4617)) & 0xFF) + M2C_FIELD(temp_t1, u8 *, 0x4618)) & 0xFF) + M2C_FIELD(temp_t1, u8 *, 0x4619)) & 0xFF) + M2C_FIELD(temp_t1, u8 *, 0x461A)) & 0xFF) + M2C_FIELD(temp_t1, u8 *, 0x461B)) & 0xFF) + M2C_FIELD(temp_t1, u8 *, 0x461C)) & 0xFF) + M2C_FIELD(temp_t1, u8 *, 0x461D)) & 0xFF;
                    } while (var_a1 < (temp_a0 - 8));
                }
            }
            if (var_a1 < temp_a0) {
                do {
                    temp_a2 = M2C_FIELD((temp_v0 + var_a1), u8 *, 0x4616);
                    var_a1 += 1;
                    var_a6 = (var_a6 + temp_a2) & 0xFF;
                } while (var_a1 < temp_a0);
            }
        }
        return var_a6;
    }
    return 0;
}
