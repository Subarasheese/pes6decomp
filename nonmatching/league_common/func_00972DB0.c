/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDC80(void *, s32);
extern void * func_001E6E10(s32);
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */

void func_00972DB0(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    void *temp_a0;
    void *temp_v0;
    void *var_s0;

    temp_v0 = func_001E6E10(arg2);
    if (temp_v0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0 != NULL) {
            var_s0 = func_001EDC80(temp_a0, arg1);
        } else {
            var_s0 = NULL;
        }
        func_001EEAC0(var_s0, temp_v0);
        sp58 = (s16) (s32) M2C_FIELD(arg3, f32 *, 0);
        sp5A = (s16) (s32) M2C_FIELD(arg3, f32 *, 4);
        sp5C = (s16) (s32) M2C_FIELD(arg3, f32 *, 8);
        sp5E = (s16) (s32) M2C_FIELD(arg3, f32 *, 0xC);
        func_001EE630(var_s0, &sp58);
    }
}
