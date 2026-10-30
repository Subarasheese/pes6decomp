/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099E920(s32);                         /* extern */

s32 func_009BD510(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == 6) {
            func_0099E920(M2C_FIELD(arg0, s32 *, 4));
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s32 *, 0) = 2;
                M2C_FIELD(arg0, s8 *, 0x15) = 1;
            }
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s32 *, 0) = 0xB;
                M2C_FIELD(arg0, s8 *, 0x15) = 1;
            }
            return 0;
        }
        return 5;
    }
    return 5;
}
