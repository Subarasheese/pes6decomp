/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
void *func_00229280(s32);                           /* extern */

s32 func_00238480(void) {
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    u8 var_v0;
    void *temp_s0;
    void *temp_s6;
    void *temp_v1;

    temp_s6 = func_00229460();
    if (func_00231240() == 1) {
        return 0;
    }
    if (temp_s6 != NULL) {
        var_s5 = 0;
        var_s2 = 0;
        var_s3 = 0;
        do {
            temp_v1 = temp_s6 + var_s5;
            var_s4 = 0;
            if ((s32) M2C_FIELD(temp_v1, u8 *, 0x4616) > 0) {
                do {
                    temp_s0 = func_00229280(var_s3 & 0xFF);
                    if (func_00231240() == 1) {
                        var_v0 = 0;
                    } else if (temp_s0 == NULL) {
                        var_v0 = 0;
                    } else {
                        var_v0 = M2C_FIELD(temp_s0, u8 *, 0xB);
                    }
                    var_s2 += var_v0 & 0xFF;
                    var_s4 += 1;
                    var_s3 += 1;
                } while (var_s4 < (s32) M2C_FIELD(temp_v1, u8 *, 0x4616));
            }
            var_s5 += 1;
        } while (var_s5 < 8);
        return var_s2;
    }
    return 0;
}
