/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D395A4[];

s32 func_00D19210(void) {
    if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3B) >> 0x3F) != 0) {
        return (*(u8 *)D_00D395A4) & 1;
    }
    return -1;
}
