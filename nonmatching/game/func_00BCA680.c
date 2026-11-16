/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern u8 D_0058E7F0[];
extern u8 D_00CBD4F0[];
void func_00BCA680(u32 arg0, u32 arg1) {
    s32 i;
    s32 j;
    u8 *p = D_0058E7F0;
    u8 *q;
    for (i = 0; i < 0x16; i++, p += 0x240) {
        if (p[0x12] == (arg0 & 0xFF) && p[0x11] == (arg1 & 0xFF)) {
            return;
        }
    }
    q = D_00CBD4F0 + (arg0 & 0xFF) * 0x12;
    for (j = 0; j < 0x12; j++) {
        if (q[j] == 0xFF) {
            q[j] = arg1;
            return;
        }
    }
}
