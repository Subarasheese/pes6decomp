/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_002ABE20(void *arg0, s8 arg1, f32 fparg0) {
    s32 n;
    u32 v;
    u8 *p;

    n = M2C_FIELD(arg0, s32 *, 0x48);
    p = (u8 *)arg0 + n * 4;
    if (p[3] != 0) {
        v = p[2] + p[3];
    } else {
        if (n == 0) {
            v = 0;
        } else {
            v = p[-2] + p[-1];
        }
        p[2] = v;
    }
    p[3] = p[3] + 1;
    M2C_FIELD(arg0, s8 *, v + 0x9C) = arg1;
    M2C_FIELD(arg0, f32 *, v * 4 + 0xB0) = fparg0;
}
