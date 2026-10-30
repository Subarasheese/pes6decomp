/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
void func_0097CFC0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    u8 var_v1;
    void *temp_v0;

    temp_v0 = func_00229380();
    if (temp_v0 != NULL) {
        temp_a1 = arg0 & 0xFF;
        if (temp_a1 < 8) {
            if ((arg1 & 0xFF) != 1) {
                var_v1 = M2C_FIELD(temp_v0, u8 *, 4) & (~(1 << temp_a1) & 0xFF);
            } else {
                var_v1 = M2C_FIELD(temp_v0, u8 *, 4) | ((1 << temp_a1) & 0xFF);
            }
            M2C_FIELD(temp_v0, u8 *, 4) = var_v1;
        }
    }
}
