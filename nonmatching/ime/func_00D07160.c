/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07160(void *arg0, void *arg1) {
    void *temp_v1;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 != NULL) {
        temp_v1 = M2C_FIELD(arg1, void **, 0x154);
        if (temp_v1 != NULL) {
            M2C_FIELD(temp_v1, void **, 0x150) = arg0;
            M2C_FIELD(arg1, void **, 0x154) = arg0;
            M2C_FIELD(arg0, void **, 0x150) = arg1;
            M2C_FIELD(arg0, void **, 0x154) = temp_v1;
            return 0;
        }
        return 1;
    }
    return 1;
}
