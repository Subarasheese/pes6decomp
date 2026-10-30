/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s16 D_003E77F4;

s32 func_00846D60(s16 arg0) {
    D_003E77F4 = arg0;
    return arg0 & 0xFFFF;
}
