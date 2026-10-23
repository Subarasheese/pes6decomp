/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0017BD70(s32, s32, M2C_UNK);

void func_0027B200(void *object, s32 value, s32 enabled) {
    if (enabled != 0) {
        func_0017BD70(M2C_FIELD(object, s32 *, 0x10), value, 0x20011111);
        return;
    }
    func_0017BD70(M2C_FIELD(object, s32 *, 0x10), value, 0x20000000);
}
