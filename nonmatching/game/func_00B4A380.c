/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027B200(void *, s32, s32);
void func_00B4A380(void **arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
    case 2:
        func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 2, arg2);
        return;
    case 1:
        func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 3, arg2);
        return;
    default:
        func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 4, arg2);
        return;
    case 3:
        func_0027B200(*M2C_FIELD(*arg0, void ***, 4), 1, arg2);
        return;
    }
}
