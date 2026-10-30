/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00888448[];

s32 func_0081DD00(void *arg0, s8 *arg1) {
    void *temp_a0;

    if (arg0 != NULL) {
        if (arg1 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) == 0) {
                temp_a0 = M2C_FIELD(arg0, void **, 0xC);
                if (temp_a0 != NULL) {
                    if (*arg1 == 0) {
                        func_001DF820(temp_a0, (s32) ((void *)D_00888448));
                    } else {
                        func_001DF820(temp_a0, (s32) arg1);
                    }
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        goto block_4;
    }
block_4:
    return 0;
}
