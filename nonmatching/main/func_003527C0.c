/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003527C0(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* irregular */
    case 5:
        if (arg1 & 0x78003) {
            return 1;
        }
block_26:
    default:
        return 0;
    case 4:
        if (arg1 & 0x83203) {
            return 1;
        }
        goto block_26;
    case 3:
        if (arg1 & 0xF43) {
            return 1;
        }
        goto block_26;
    case 2:
        if (arg1 & 0x41C3) {
            return 1;
        }
        goto block_26;
    case 1:
        if (arg1 & 0x3F) {
            return 1;
        }
        goto block_26;
    }
}
