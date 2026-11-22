/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BB1E68(s32, s32);

s32 func_00BCC080(void *arg0) {
    if (func_00BB1E68(M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0xF8),
                      M2C_FIELD(M2C_FIELD(arg0, void **, 0xDC), s32 *, 0x104)) == 0) {
        return 0;
    }
    return func_00BB1E68(M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0xFC),
                         M2C_FIELD(M2C_FIELD(arg0, void **, 0xDC), s32 *, 0x108)) != 0;
}
