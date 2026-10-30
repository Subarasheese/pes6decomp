/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00225680(s32);                             /* extern */
s32 func_00225E10();                                /* extern */

void *func_00B5B100(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s4;
    s32 var_s3;
    void *temp_v0;
    void *var_s6;

    var_s6 = NULL;
    temp_s4 = func_00225820() & 0xFF;
    if (temp_s4 != 0xFF) {
        if ((func_00225680(temp_s4) & 0xFFFF) == 0xFFFF) {
            return NULL;
        }
        temp_s2 = func_00225E10() & 0xFF;
        var_s3 = 0;
        if (temp_s2 > 0) {
loop_8:
            if (((func_002243B0(temp_s4, var_s3 & 0xFF) & 0xFF) != 0xFF) && (temp_s0 = func_00224BC0(temp_s4, var_s3 & 0xFF) & 0xFFFF, (temp_s0 != 0)) && (temp_v0 = func_00223C10(), var_s6 = temp_v0, (temp_v0 != NULL))) {
                if ((temp_s0 & 0xFFFF) != (arg0 & 0xFFFF)) {
                    goto block_13;
                }
            } else {
block_13:
                var_s3 += 1;
                if (var_s3 < temp_s2) {
                    goto loop_8;
                }
            }
        }
        if (var_s3 >= temp_s2) {
            var_s6 = NULL;
        }
        return var_s6;
    }
    return NULL;
}
