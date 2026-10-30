/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
void func_00994D00(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        temp_a1 = arg0 & 0xFF;
        if (temp_a1 < 0xA) {
            if ((arg1 & 0xFF) != 1) {
                var_v1 = M2C_FIELD(temp_v0, s32 *, 8) & ~(1 << temp_a1);
            } else {
                var_v1 = M2C_FIELD(temp_v0, s32 *, 8) | (1 << temp_a1);
            }
            M2C_FIELD(temp_v0, s32 *, 8) = var_v1;
        }
    }
}
