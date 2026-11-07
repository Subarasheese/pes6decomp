/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_001493F0(s32, s32);

s64 func_00147D40(s32 id) {
    u8 *entry = func_001493F0(1, id);

    if (entry != NULL) {
        return M2C_FIELD(entry, s64 *, 0x50);
    }
    return 0;
}
