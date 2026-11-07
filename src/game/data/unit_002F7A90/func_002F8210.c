/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_002F82D0(s32, s32, s32, s32);

s32 func_002F8210(s32 id) {
    u8 *entry = func_002F82D0(0, id, 0, 0);

    if (entry == NULL) {
        return 1;
    }
    return entry[0x3A] == 1;
}
