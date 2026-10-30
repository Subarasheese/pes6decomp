/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00164F00(void *arg0, void *arg1) {
    M2C_UNK (*temp_v0)(void *, void *);
    M2C_UNK (*temp_v0_2)(void *, void *);
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_a0 != NULL) {
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, void *), 0xC4);
        if (temp_v0 != NULL) {
            temp_v0(temp_a0, arg0);
        }
    }
    M2C_FIELD(arg0, void **, 0x50) = arg1;
    if (arg1 != NULL) {
        temp_v0_2 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), M2C_UNK (**)(void *, void *), 0xC0);
        if (temp_v0_2 != NULL) {
            temp_v0_2(arg1, arg0);
        }
    }
}
