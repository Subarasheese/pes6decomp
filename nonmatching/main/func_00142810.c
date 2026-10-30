/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00143170(void);
extern void func_00142690(void *);
extern void func_00143160(void);
M2C_UNK func_00141470(void *, s32);                 /* extern */
M2C_UNK func_00143410(void *, s32, s32);            /* extern */
extern s32 D_003E9800;
extern s32 D_003E9804;

void func_00142810(void *arg0, s32 arg1, s32 arg2) {
    if (D_003E9800 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            func_00142690(arg0);
            func_00141470(arg0, arg1);
            D_003E9804 = 1;
        }
        func_00143170();
        func_00143410(arg0, arg1, arg2);
        func_00143160();
    }
}
