/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165778(void *);
void func_0017F780(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0xA30);
    if (temp_a0 != NULL) {
        func_00165778(temp_a0);
    }
}
