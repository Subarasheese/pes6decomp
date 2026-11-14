/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00340F30(u8 *arg0) {
    s32 t;

    if (arg0 == NULL) return 0;
    if (*(s32 *)arg0 != 1) return 0;
    t = arg0[0x21];
    if ((t != 8) && (t != 7)) {
        return 0;
    }
    return 1;
}
