/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00341350(s32 *obj) {
    if (obj == NULL) {
        return 0;
    }
    if (obj[0] != 3) {
        return 0;
    }
    return obj[8] == 8;
}
