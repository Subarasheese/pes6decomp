/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002DCEA0(u32 arg0) {
    return ((arg0 << 0x18) & 0xFF000000) | (((arg0 << 8) & 0xFF0000) | (((arg0 >> 0x18) & 0xFF) | ((arg0 >> 8) & 0xFF00)));
}
