/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AB44C0(s32);                         /* extern */

void func_00AB47C0(void *arg0) {
    s32 temp_a1_2;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_a1_2 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 8) * 2;
    if (M2C_FIELD(temp_a1, f32 *, 0x38) < (f32) temp_a1_2) {
        func_00AB44C0(temp_a1_2);
    }
}
