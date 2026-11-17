/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 *D_00CB3300;

s32 func_00322600(u8 *arg0, u8 *arg1) {
    s16 a3;
    s16 a2;

    arg0[0xA] = 1;
    arg1[0xA] = 1;
    a3 = *(s16 *)(D_00CB3300 + 8);
    a2 = *(s16 *)(D_00CB3300 + 0x2FC);
    if (a3 == a2) {
        *(s16 *)(arg0 + 2) = *(s16 *)(arg0 + 2) + 1;
        *(s16 *)(arg1 + 2) = *(s16 *)(arg1 + 2) + 1;
    } else if (a2 < a3) {
        *(s16 *)(arg0 + 2) = *(s16 *)(arg0 + 2) + 3;
    } else {
        *(s16 *)(arg1 + 2) = *(s16 *)(arg1 + 2) + 3;
    }
    *(s16 *)(arg0 + 6) = *(s16 *)(arg0 + 6) + a3;
    *(s16 *)(arg0 + 8) = *(s16 *)(arg0 + 8) + a2;
    *(s16 *)(arg1 + 6) = *(s16 *)(arg1 + 6) + a2;
    *(s16 *)(arg1 + 8) = *(s16 *)(arg1 + 8) + a3;
    return 1;
}
