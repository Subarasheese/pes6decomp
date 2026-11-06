/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void *D_003E7E1C;

void func_00CEE3D0(void *arg0) {
    if (M2C_FIELD(D_003E7E1C, s32 *, 4) == 1) {
        func_00264790(arg0, 0x11U);
        return;
    }
    func_00264790(arg0, 0x12U);
}
