/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void func_001B2970(void *arg0) {
    void *temp_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0);
    temp_a0 = M2C_FIELD(temp_s0, void **, 0xC);
    if (temp_a0 != NULL) {
        func_00153FA0(temp_a0);
    }
    M2C_FIELD(temp_s0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_s0, s8 *, 1) = 2;
}
