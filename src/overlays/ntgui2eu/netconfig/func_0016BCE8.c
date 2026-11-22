/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00163FE8(s32, s32);

void func_0016BCE8(s32 arg0, s32 arg1) {
    func_00163FE8(M2C_FIELD(arg0, s32 *, 0x910), arg1);
    func_00163FE8(M2C_FIELD(arg0, s32 *, 0x914), arg1);
    func_00163FE8(M2C_FIELD(arg0, s32 *, 0x918), arg1);
}
