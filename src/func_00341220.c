/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00341220(s32 *obj) {
    if (obj == NULL) {
        return 0;
    }
    if (obj[0] != 1) {
        return 0;
    }
    return ((u8 *)obj)[0x21] == 5;
}
