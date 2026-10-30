/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016B290(void *arg0, void **arg1) {
    void *temp_v1;

    temp_v1 = *arg1;
    M2C_FIELD(arg0, s64 *, 0) = (s64) M2C_FIELD(temp_v1, s64 *, 0);
    M2C_FIELD(arg0, s64 *, 8) = (s64) M2C_FIELD(temp_v1, s64 *, 8);
}
