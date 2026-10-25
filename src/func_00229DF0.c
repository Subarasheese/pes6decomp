/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_00228A80(void);
s32 func_00231240(void);

u8 *func_00229DF0(void) {
    u8 *p = func_00228A80();

    if (func_00231240() == 1) {
        return NULL;
    }
    if (p == NULL) {
        return NULL;
    }
    return p + 0xA680;
}
