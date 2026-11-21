/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DD50[];

u32 func_009C24C0(u32 param_1) {
    if (D_00A7DD50[0] == 0) {
        return 0;
    }
    *(u32 *)(D_00A7DD50[0] + 0x11bc) = param_1;
    return 1;
}
