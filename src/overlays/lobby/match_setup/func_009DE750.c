/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DED0[];

u32 func_009DE750(void) {
    if (D_00A7DED0[0] == 0) {
        return 0;
    }
    return *(u32 *)(D_00A7DED0[0] + 0x1c);
}
