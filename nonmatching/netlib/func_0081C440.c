/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001D7F10(void *);
s32 func_0081C440(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x84) = 1;
            M2C_FIELD(arg0, s32 *, 0x88) = 1;
            M2C_FIELD(arg0, s8 *, 0x7E) = 0;
            M2C_FIELD(arg0, s8 *, 0x7F) = 0;
            M2C_FIELD(arg0, s8 *, 0x80) = 0;
            M2C_FIELD(arg0, s8 *, 0x81) = 0;
            M2C_FIELD(arg0, s8 *, 0x82) = 1;
            M2C_FIELD(arg0, s8 *, 0x83) = 1;
        }
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
            M2C_FIELD(arg0, void **, 8) = NULL;
        }
        temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0_2 != NULL) {
            func_001D7F10(temp_a0_2);
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        }
    }
    func_00153FA0(arg0);
    return 1;
}
