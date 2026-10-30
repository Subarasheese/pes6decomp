/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132B0(u32);                             /* extern */
s32 func_00C132C0(u32);                             /* extern */
u32 func_00C135B0(u32, M2C_UNK *, s32);             /* extern */
u32 func_00C13840();                                /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

u32 func_002C5940(u32 arg0) {
    s32 temp_s2;
    s32 temp_v0;
    u32 temp_s1;
    u32 var_s3;
    u32 var_s4;

    var_s4 = arg0;
    temp_s1 = func_00C13840();
    var_s3 = var_s4;
    if ((var_s4 != -1U) && ((func_00C132C0(var_s4) & 0xFF) == 0xF)) {
        temp_v0 = func_00C132B0(var_s4) & 0xFF;
        if (temp_s1 < var_s4) {
            temp_s2 = (*(s32 *)D_00CB3468);
loop_6:
            if ((temp_v0 & 0xFF) == (func_00C132B0(var_s4) & 0xFF)) {
                var_s3 = var_s4;
                var_s4 = func_00C135B0(var_s4, ((void *)D_00CB3450), temp_s2);
                if (var_s4 != -1U) {
                    if (temp_s1 >= var_s4) {

                    } else {
                        goto loop_6;
                    }
                }
            }
        }
        return var_s3;
    }
    return -1U;
}
