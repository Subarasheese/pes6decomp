/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EADC8;

s32 func_00AF0930(s32 arg0) {
    if (D_003EADC8 != 0) {
        if ((((arg0 & 0xFF) + 1) * 0xD) < 0x11) {
            return 0xD;
        }
        return 3;
    }
    return 0;
}
