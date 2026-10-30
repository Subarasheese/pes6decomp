/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7C20(void *, s32);
extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void *D_00A7DE00;

s32 func_009D2280(s32 arg0) {
    void *temp_s0;

    if (D_00A7DE00 != NULL) {
        temp_s0 = M2C_FIELD(D_00A7DE00, void **, 0xBC);
        if (arg0 == 0) {
            func_001D7D60(temp_s0, 0);
            func_001D7C20(temp_s0, 0);
            func_001D7D80(temp_s0, 0);
        } else {
            func_001D7D60(temp_s0, 1);
            func_001D7C20(temp_s0, 2);
        }
        return 1;
    }
    return 0;
}
