/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *Pes6OptionData_GetBlock2CC(void);
s32 func_003710E0(s32);

void func_00262630(u8 value) {
    M2C_FIELD(Pes6OptionData_GetBlock2CC(), u8 *, 1) = value;
    func_003710E0(value & 0xFF);
}
