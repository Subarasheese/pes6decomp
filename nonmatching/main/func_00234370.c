/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
extern void *D_003E77B4;

s32 func_00234370(void) {
    u8 temp_s1;
    void *temp_s0;
    void *temp_v0;

    temp_s1 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 0;
    }
    if (temp_s0 != NULL) {
        temp_v0 = ((temp_s1 & 0xFF) * 0xC) + temp_s0;
        return ((M2C_FIELD(temp_v0, u8 *, 0x4AB9) * M2C_FIELD(temp_v0, u8 *, 0x4ABE)) - 1) & 0xFF;
    }
    return 0;
}
