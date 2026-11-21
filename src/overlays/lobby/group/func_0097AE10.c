/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0099C7E0(s32);

extern s32 D_00A68D88[];

void func_0097AE10(void) {
    s32 temp_v0;

    if (D_00A68D88[0] == 0) {
        temp_v0 = func_0099C7E0(0x14);
        D_00A68D88[0] = temp_v0;
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v0, s8 *, 3) = 0;
        }
    }
}
