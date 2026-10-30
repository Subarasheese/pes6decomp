/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016B420(void *arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg1, void **, 8);
    M2C_FIELD(temp_v1, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0xC);
    M2C_FIELD(M2C_FIELD(arg1, void **, 0xC), void **, 8) = temp_v1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 0xC) = arg0;
    M2C_FIELD(arg1, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = arg1;
}
