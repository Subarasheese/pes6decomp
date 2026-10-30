/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002EFF90(void *, s8);
void func_002F3B80(void *arg0, s8 arg1) {
    u8 temp_a0;

    if ((arg0 != NULL) && ((temp_a0 = M2C_FIELD(arg0, u8 *, 0), (temp_a0 == 0)) || (temp_a0 == 3) || (temp_a0 == 7))) {
        func_002EFF90(arg0 + 0xC, arg1);
        M2C_FIELD(arg0, s8 *, 6) = arg1;
    }
}
