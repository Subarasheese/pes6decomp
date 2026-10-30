/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void func_001D63E0(void *arg0) {
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
        temp_v0 = M2C_FIELD(arg0, void **, 0x20);
        temp_a1 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_v1 != NULL) {
            M2C_FIELD(temp_v1, void **, 0x20) = temp_v0;
        } else {
            M2C_FIELD(temp_a1, void **, 0x14) = temp_v0;
        }
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, void **, 0x1C) = temp_v1;
        } else {
            M2C_FIELD(temp_a1, void **, 0x18) = temp_v1;
        }
        M2C_FIELD(temp_a1, s32 *, 0x10) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x10) - 1);
        func_00153FA0(arg0);
    }
}
