/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_0094C790(s32);
extern void *Pes6SaveData_Current;

s32 func_0096AA70(void) {
    s32 var_s0;

    var_s0 = -1;
    switch (M2C_FIELD(Pes6SaveData_Current, s32 *, 4)) {
    case 0:
        var_s0 = 0x46;
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
