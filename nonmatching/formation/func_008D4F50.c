/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008D4F50(void *arg0, void *arg1) {
    u8 temp_v1;
    void *temp_a0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 3);
        if (temp_v1 != 0) {
            temp_a0 = (temp_v1 * 2) + (arg1 + (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52));
            M2C_FIELD(temp_a0, u8 *, 0x7D4) = (u8) M2C_FIELD(arg0, u8 *, 0);
            M2C_FIELD(temp_a0, u8 *, 0x7D5) = (u8) M2C_FIELD(arg0, u8 *, 1);
        }
    }
}
