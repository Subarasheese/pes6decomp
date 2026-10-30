/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDD00(void *);
extern void func_001EF860(void *, void *);
extern void func_001EF900(void *, s8);
M2C_UNK func_001EE630(void *, s32);                 /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_001EF370(void *, s32);                 /* extern */

void *func_001B5350(s32 arg0, s32 arg1, void *arg2, s32 arg3, f32 fparg0, f32 fparg1) {
    f32 sp60;
    f32 sp64;
    s32 sp68;
    s32 sp6C;
    f32 sp78;
    f32 sp7C;
    void *temp_s0;

    temp_s0 = func_001EDD00(arg2);
    sp78 = fparg0;
    sp7C = fparg1;
    if (temp_s0 != NULL) {
        if (&sp78 != NULL) {
            sp60 = fparg0;
            sp68 = 0;
            sp64 = fparg1;
            sp6C = 0;
            func_001EF860(temp_s0, &sp60);
        }
        if (arg0 != 0) {
            func_001EF370(temp_s0, arg0);
        }
        if (arg3 != 0) {
            func_001EEAC0(temp_s0, arg3);
        }
        if (arg1 != 0) {
            func_001EE630(temp_s0, arg1);
        }
        func_001EF900(temp_s0, 1);
    }
    return temp_s0;
}
