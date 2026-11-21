/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_009A4650(s32);
M2C_UNK func_009A4DB0(M2C_UNK);
extern u32 func_009A5FE0(void);
M2C_UNK func_009A60C0(s32);
extern u32 func_009A84E0(void);

void func_009A5690(void) {
    s32 temp_v0;

    if (func_009A84E0() != 0) {
        temp_v0 = func_009A5FE0();
        if (temp_v0 != 0) {
            func_009A4650(temp_v0 - 1);
            func_009A60C0(temp_v0 - 1);
        } else {
            func_009A4DB0(0);
        }
    }
}
