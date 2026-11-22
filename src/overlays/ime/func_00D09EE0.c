/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00D10EE0(void *);

s32 func_00D09EE0(s8 *arg0) {
    if ((arg0 == NULL)) {
        return 1;
    }
    func_00D10EE0(arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return 0;
}
