/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(void *);                      /* extern */
M2C_UNK func_00164DD8(s32, void *, s32);            /* extern */

void func_001640E0(void *arg0, s32 arg1) {
    M2C_UNK (*temp_v0)(void *, void *);
    void *temp_a0;

    func_00164DD8(M2C_FIELD(arg0, s32 *, 0x4C), arg0, arg1);
    temp_a0 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_a0 != NULL) {
        temp_v0 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x4C), M2C_UNK (**)(void *, void *), 0xC4);
        if (temp_v0 != NULL) {
            temp_v0(temp_a0, arg0);
        }
    }
    func_00135018(arg0);
}
