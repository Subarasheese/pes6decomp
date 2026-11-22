/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);

extern void *D_003E7E1C;

void func_00CD21E0(void *arg0) {
    u32 temp_v0;

    temp_v0 = M2C_FIELD(D_003E7E1C, u32 *, 4);
    switch (temp_v0) {
    case 3:
        func_00264790(arg0, 0x3BU);
        return;
    case 0:
    case 2:
        func_00264790(arg0, 0x15U);
        return;
    default:
        func_00264790(arg0, 0x14U);
        return;
    case 6:
        func_00264790(arg0, 0x17U);
        return;
    case 7:
        func_00264790(arg0, 0x1EU);
        return;
    case 5:
        func_00264790(arg0, 0x15U);
        return;
    case 4:
        func_00264790(arg0, 0x38U);
        return;
    case 9:
        func_00264790(arg0, 0x47U);
        return;
    }
}
