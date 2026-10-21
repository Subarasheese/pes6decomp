/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_001EDD00(s32);

s32 func_001D67E0(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 != 0) {
            return func_001EDD00(temp_a0);
        }
    }
    return 0;
}
