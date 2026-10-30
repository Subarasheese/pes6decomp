/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED840(void *, s8);
extern void func_001D7840(void *, s8);
extern void func_001DEF30(void *, s8);
s32 func_0081DB70(void *arg0, s8 arg1) {
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (arg0 == NULL) {
        return 0;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 2:
        temp_a0 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0 == NULL) {
            return 0;
        }
        func_001D7840(temp_a0, arg1);
block_22:
        return 1;
    case 1:
        temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0_2 == NULL) {
            return 0;
        }
        func_001ED840(temp_a0_2, arg1);
        goto block_22;
    case 0:
        temp_a0_3 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0_3 == NULL) {
            return 0;
        }
        func_001DEF30(temp_a0_3, arg1);
        goto block_22;
    default:
        return 0;
    }
}
