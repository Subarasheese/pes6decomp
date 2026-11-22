/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DBF0[];

u32 func_009AF5E0(void) {
    if (D_00A7DBF0[0] == 0) {
        return 0;
    }
    return *(u32 *)(D_00A7DBF0[0] + 0x130);
}
