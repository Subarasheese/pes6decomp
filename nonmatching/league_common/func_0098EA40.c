/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
s32 func_00228F20(s32);                             /* extern */
s8 func_00234E00(s32);                              /* extern */
extern void *D_003E7B0C;

void func_0098EA40(void) {
    s32 var_s1;
    void *temp_v0;

    temp_v0 = func_00229460();
    if ((temp_v0 != NULL) && (M2C_FIELD(D_003E7B0C, s8 *, 0x28) = 0, var_s1 = 0, ((s32) M2C_FIELD(temp_v0, u8 *, 0x1364) > 0))) {
loop_2:
        if ((func_00228F20(var_s1 & 0xFF) & 0xFF) <= 0) {
            var_s1 += 1;
            if (var_s1 >= (s32) M2C_FIELD(temp_v0, u8 *, 0x1364)) {

            } else {
                goto loop_2;
            }
        } else {
            M2C_FIELD(D_003E7B0C, s8 *, 0x28) = func_00234E00(var_s1 & 0xFF);
        }
    }
}
