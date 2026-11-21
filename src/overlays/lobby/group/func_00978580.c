/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0097A270(void);
extern s32 func_0099C7E0(s32);

extern s32 D_00A68D58[];

void func_00978580(void) {
    s32 temp_v0;

    if (D_00A68D58[0] == 0) {
        temp_v0 = func_0099C7E0(4);
        D_00A68D58[0] = temp_v0;
        if (temp_v0 != 0) {
            func_0097A270();
            M2C_FIELD(D_00A68D58[0], s8 *, 3) = 1;
        }
    }
}
