/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
void *func_00223E00(s32);                           /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */

s32 func_00B04E90(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s4;
    s32 var_s2;
    s32 var_s3;
    void *temp_v0;
    void *temp_v0_2;

    var_s3 = 0;
    temp_s1 = func_00225820() & 0xFF;
    var_s2 = 0;
    do {
        temp_s4 = func_00224BC0(temp_s1, var_s2 & 0xFF) & 0xFFFF;
        if (temp_s4 != 0) {
            func_002243B0(temp_s1, var_s2 & 0xFF);
            temp_v0 = func_00223C10();
            if (temp_v0 != NULL) {
                temp_v0_2 = func_00223E00(temp_s4);
                if (temp_v0_2 != NULL) {
                    temp_a0 = M2C_FIELD(temp_v0, u8 *, 0) & 0xF;
                    if ((temp_a0 != 5) && (temp_a0 != 6) && (temp_a0 != 7) && ((M2C_FIELD(temp_v0_2, u8 *, 6) & 0x3F) != 3)) {
                        var_s3 += M2C_FIELD(temp_v0, u16 *, 2);
                    }
                }
            }
        }
        var_s2 = (var_s2 + 1) & 0xFFFF;
    } while (var_s2 < 0x20);
    return var_s3;
}
