/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *D_005202D0[];
extern s16 D_0051FFB2[];
u8 *func_00153FE0(s32, s32);

void func_0019C5F0(void) {
    u8 *buf;

    if (D_005202D0[0] != NULL) {
        return;
    }
    buf = func_00153FE0(D_0051FFB2[0], 0x21F0);
    D_005202D0[0] = buf;
    M2C_FIELD(buf, s32 *, 0x0) = 0;
    M2C_FIELD(buf, s32 *, 0xB50) = 0;
    M2C_FIELD(buf, s32 *, 0x16A0) = 0;
}
