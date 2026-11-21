/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BA4338(s32);
M2C_UNK func_00BC0A88(void *);

void func_00BA5690(void *arg0) {
    func_00BA4338(arg0 + 0xC);
    func_00BA4338(arg0 + 0x20);
    func_00BA4338(arg0 + 0x34);
    if (M2C_FIELD(arg0, s32 *, 0x50) & 1) {
        func_00BC0A88(arg0);
    }
}
