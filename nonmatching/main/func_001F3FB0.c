/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001F3FB0(void *arg0, void *arg1) {
    void *temp_v1;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg0 != arg1) && (M2C_FIELD(arg1, u8 *, 0) != 0)) {
        M2C_FIELD(arg1, void **, 0x28) = arg0;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) {
            temp_v1 = M2C_FIELD(arg0, void **, 0x30);
            M2C_FIELD(temp_v1, void **, 0x38) = arg1;
            M2C_FIELD(arg1, void **, 0x34) = temp_v1;
        } else {
            M2C_FIELD(arg0, void **, 0x2C) = arg1;
            M2C_FIELD(arg1, void **, 0x34) = NULL;
        }
        M2C_FIELD(arg0, void **, 0x30) = arg1;
        M2C_FIELD(arg1, s32 *, 0x38) = 0;
        M2C_FIELD(arg1, s8 *, 3) = (s8) (M2C_FIELD(arg0, u8 *, 3) + 1);
    }
}
