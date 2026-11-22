/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DDA8[];

u32 func_009CC3A0(void) {
    if (D_00A7DDA8[0] == 0) {
        return 0xe;
    }
    return *(u32 *)(D_00A7DDA8[0] + 8);
}
