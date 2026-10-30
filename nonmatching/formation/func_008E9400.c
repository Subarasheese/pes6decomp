/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008E9400(void *arg0, void *arg1) {
    void *temp_a0;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + arg1), u8 *, 0x822) = (u8) M2C_FIELD(arg0, u8 *, 1);
        M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + arg1), u8 *, 0x824) = (u8) M2C_FIELD(arg0, u8 *, 2);
        temp_a0 = (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + arg1;
        if (M2C_FIELD(temp_a0, u8 *, 0x824) == 0) {
            M2C_FIELD(temp_a0, s8 *, 0x821) = 2;
            return;
        }
        M2C_FIELD(temp_a0, s8 *, 0x821) = 0;
    }
}
