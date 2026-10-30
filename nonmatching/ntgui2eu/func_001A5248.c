/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005CBBA0[];

s32 func_001A5248(void) {
    if ((*(s32 *)D_005CBBA0) < 0) {
        return 0x80008001;
    }
    return *(s32 *)0x10001010 & 3;
}
