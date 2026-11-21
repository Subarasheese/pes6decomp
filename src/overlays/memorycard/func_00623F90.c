/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_0065C0F0[];

u8 func_00623F90(int arg0) {
    u8 value;

    if (D_0065C0F0[0] == 0) {
        value = 0;
        return value;
    }
    if (arg0 == 0) {
        value = *(u8 *)(D_0065C0F0[0] + 4);
    } else {
        value = *(u8 *)(D_0065C0F0[0] + 5);
    }
    return value;
}
