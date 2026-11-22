/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DEB0[];

u32 func_009DAC50(u8 param_1) {
    if (D_00A7DEB0[0] == 0) {
        return 0;
    }
    *(u8 *)(D_00A7DEB0[0] + 0x295) = param_1;
    return 1;
}
