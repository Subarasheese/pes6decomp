/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2F50[];

void func_002B8E80(s32 arg0) {
    if (((void *)D_005E2F50) != NULL) {
        if (arg0 >= 4) {
            return;
        }
        (*(u8 *)D_005E2F50) &= 0x3F;
        (*(u8 *)D_005E2F50) |= (arg0 << 6) & 0xFF;
    }
}
