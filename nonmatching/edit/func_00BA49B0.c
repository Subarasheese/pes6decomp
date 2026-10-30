/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002EDE60(s32);
s32 func_00BA49B0(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        return func_002EDE60(0) & 0xFF;
    case 1:
        return func_002EDE60(1) & 0xFF;
    default:
        return 0;
    }
}
