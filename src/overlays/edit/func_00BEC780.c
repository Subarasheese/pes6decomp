/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00CE64D0[];

u8 func_00BEC780(void) {
    u8 value;

    if (D_00CE64D0[0] == 0) {
        value = '\x05';
    } else {
        value = *(u8 *)(D_00CE64D0[0] + 0xee);
    }
    return value;
}
