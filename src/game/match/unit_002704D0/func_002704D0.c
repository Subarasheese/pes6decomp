/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u16 func_009B3FA0(u8);
extern u8 D_003E9C8C;

u16 func_002704D0(void *arg0) {
    if (D_003E9C8C != 0) {
        return func_009B3FA0(M2C_FIELD(arg0, u8 *, 0));
    }
    return M2C_FIELD(arg0, u16 *, 0x28);
}
