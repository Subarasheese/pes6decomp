/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00B0A170(s32 arg0, s32 arg1) {
    u16 temp_a1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_00228A80();
    temp_a0 = (arg0 * 2) + temp_v0;
    temp_v1 = (arg1 * 2) + temp_v0;
    temp_a1 = M2C_FIELD(temp_a0, u16 *, 0x32EAE);
    M2C_FIELD(temp_a0, u16 *, 0x32EAE) = (u16) M2C_FIELD(temp_v1, u16 *, 0x32EAE);
    M2C_FIELD(temp_v1, u16 *, 0x32EAE) = temp_a1;
}
