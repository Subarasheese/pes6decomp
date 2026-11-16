/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0058E7F0[];
extern u8 D_00CCAE40[];

void func_00C17800(void) {
    u8 *p;
    s32 i;
    s32 j;
    s32 idx;
    s32 side;

    for (i = 0; i < 2; i++) {
        side = i & 0xFF;
        for (j = 0; j < 0x20; j++) {
            idx = j & 0xFF;
            if (side < 2 && idx < 0x20) {
                D_00CCAE40[side * 0x20 + idx + 0x80] = 0xFF;
            }
        }
    }
    p = D_0058E7F0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 11; j++, p += 0x240) {
            u8 s = p[0x12];
            u8 n = p[0x11];
            if (s < 2 && n < 0x20) {
                D_00CCAE40[s * 0x20 + n + 0x80] = p[0];
            }
        }
    }
}
