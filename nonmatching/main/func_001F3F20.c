/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001F3F20(void *arg0) {
    void *temp_a1;
    void *temp_v1;

    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(arg0, void **, 0x28) = NULL;
        if (M2C_FIELD(temp_a1, void **, 0x2C) != arg0) {
            if (M2C_FIELD(temp_a1, void **, 0x30) != arg0) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x38);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 0x34) = (void *) M2C_FIELD(arg0, void **, 0x34);
            } else {
                M2C_FIELD(temp_a1, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x34);
                M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x30), s32 *, 0x38) = 0;
            }
        } else {
            M2C_FIELD(temp_a1, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x38);
            temp_v1 = M2C_FIELD(temp_a1, void **, 0x2C);
            if (temp_v1 != NULL) {
                M2C_FIELD(temp_v1, s32 *, 0x34) = 0;
            } else {
                M2C_FIELD(temp_a1, void **, 0x30) = NULL;
            }
        }
    }
}
