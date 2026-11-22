/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00A0F9A0(void *arg0) {
    switch (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30)) {
    case 0x6A:
        return 0;
    default:
        return 1;
    }
}
