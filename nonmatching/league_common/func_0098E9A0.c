/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
extern void * func_0022F150(void);
s32 func_00228F20(s32);                             /* extern */
s16 func_002290D0(s32);                             /* extern */
s32 func_00230410();                                /* extern */

void func_0098E9A0(void) {
    s32 var_s2;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = func_00229460();
    temp_s0 = func_0022F150();
    if ((temp_s1 != NULL) && (temp_s0 != NULL) && (func_00230410() != 1) && (var_s2 = 0, ((s32) M2C_FIELD(temp_s1, u8 *, 0x1364) > 0))) {
loop_4:
        if ((func_00228F20(var_s2 & 0xFF) & 0xFF) <= 0) {
            var_s2 += 1;
            if (var_s2 >= (s32) M2C_FIELD(temp_s1, u8 *, 0x1364)) {

            } else {
                goto loop_4;
            }
        } else {
            M2C_FIELD(temp_s0, s16 *, 4) = func_002290D0(var_s2 & 0xFF);
            M2C_FIELD(temp_s0, s8 *, 8) = 0;
        }
    }
}
