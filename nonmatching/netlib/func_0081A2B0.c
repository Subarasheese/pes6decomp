/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001D7F10(void *);
s32 func_0081A2B0(void *arg0) {
    void *temp_a0;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x45) = 0;
            M2C_FIELD(arg0, s8 *, 0x46) = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
            M2C_FIELD(arg0, void **, 8) = NULL;
        }
    }
    func_00153FA0(arg0);
    return 1;
}
