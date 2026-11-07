/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0058E802[];

s32 func_003119B0(u8 *out, s32 side) {
    *out = D_0058E802[0] == side ? 1 : 12;
    return 1;
}
