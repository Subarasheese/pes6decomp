/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u32 func_00B5F200(void);
s32 func_00225680(u8);
M2C_UNK func_009BE430();
M2C_UNK func_009BECB0(u16, s32);
void func_00B5F9B0(void) {
    u8 *temp_v0;
    s32 t;
    temp_v0 = (u8 *)func_00B5F200();
    if (temp_v0 != 0) {
        t = func_00225680(temp_v0[0x5CD]);
        func_009BECB0(((u16 *)(temp_v0 + 0x608))[temp_v0[0x54C] * 10], t);
        func_009BE430();
    }
}
