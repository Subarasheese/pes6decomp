/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_008A4398[];

u32 func_00828160(void) {
    if (D_008A4398[0] == 0) {
        return 0;
    }
    return *(u32 *)(D_008A4398[0] + 0x49E8);
}
