/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00624750();                                /* extern */

s32 func_00627510(s32 arg0) {
    if ((arg0 & 0xFFFF) == 0xFFFF) {
        return 0;
    }
    return (func_00624750() != 0) ^ 1;
}
