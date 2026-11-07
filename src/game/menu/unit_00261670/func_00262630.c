/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00221210(void);
s32 func_003710E0(s32);

void func_00262630(u8 value) {
    M2C_FIELD(func_00221210(), u8 *, 1) = value;
    func_003710E0(value & 0xFF);
}
