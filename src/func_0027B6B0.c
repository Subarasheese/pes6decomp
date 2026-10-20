/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_0027B6B0(void *arg0, f32 fparg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4);
    if (M2C_FIELD(temp_a0, s32 *, 4) != 0) {
        M2C_FIELD(temp_a0, f32 *, 0xC) = fparg0;
    }
}
