/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DED10(void *, s8);
s32 func_0081D940(void *arg0, s8 arg1) {
    s32 temp_v1;
    void *temp_a0;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 < 3) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 2:
            return 0;
        case 1:
            return 0;
        case 0:
            temp_a0 = M2C_FIELD(arg0, void **, 0xC);
            if (temp_a0 == NULL) {
                return 0;
            }
            func_001DED10(temp_a0, arg1);
            return 1;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}
