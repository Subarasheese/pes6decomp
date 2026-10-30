/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BEDF80(u16 *arg0, u16 *arg1) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        temp_v0 = *arg1;
        if (temp_v0 != 0) {
            if ((s32) temp_v0 >= (s32) temp_v1) {
                return 1;
            }
            return -1;
        }
        return -1;
    }
    return 1;
}
