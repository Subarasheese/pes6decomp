/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00592810[];

s32 func_008188D0(u8 *arg0) {
    if (*arg0 != D_00592810[0]) {
        return 0xE;
    }
    return 1;
}
