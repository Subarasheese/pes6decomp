/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 *D_00520238;

void func_001959E0(s32 arg0, s32 arg1) {
    if ((D_00520238 != NULL) && (*D_00520238 != 0)) {
        M2C_FIELD(((arg0 * 0x2E54) + D_00520238), s32 *, 0xDAC) = arg1;
    }
}
