/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002F96F0(void *, u32);
extern void func_001DF4F0(void *, s8);
extern s32 func_002F9630(s32);
void func_002FA4E0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u32 var_s1;
    void *temp_v0_2;

    temp_v0 = func_002F9630(arg0);
    var_s1 = 0;
    if (temp_v0 > 0) {
        do {
            temp_v0_2 = func_002F96F0((void *) arg0, var_s1);
            if (temp_v0_2 != NULL) {
                func_001DF4F0(M2C_FIELD(temp_v0_2, void **, 0xC), arg1 & 0xFF);
            }
            var_s1 += 1;
        } while ((s32) var_s1 < temp_v0);
    }
}
