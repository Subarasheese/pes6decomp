/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00150FF0(s32, s32);
extern void func_00153FA0(void *);
M2C_UNK func_00145750(s32);                         /* extern */
M2C_UNK func_001511C0(s32, s32);                    /* extern */

void func_0017E1D0(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_s0 != 0) {
        func_001511C0(temp_s0, temp_s1);
        func_00150FF0(temp_s0, temp_s1);
        func_00153FA0((void *) temp_s1);
    } else {
        func_00145750(temp_s1);
    }
}
