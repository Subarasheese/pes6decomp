/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DB710(void *);
void **func_001DB310(void *arg0, void *arg1) {
    void **temp_s0;
    void *temp_v0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v0 = M2C_FIELD(arg1, void **, 0);
        temp_s0 = M2C_FIELD(arg1, void ***, 4);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, void ***, 4) = temp_s0;
        } else {
            M2C_FIELD(arg0, void ***, 0) = temp_s0;
        }
        if (temp_s0 == NULL) {
            M2C_FIELD(arg0, void **, 4) = temp_v0;
        } else {
            *temp_s0 = temp_v0;
        }
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) - 1);
        func_001DB710(arg1);
        return temp_s0;
    }
    return NULL;
}
