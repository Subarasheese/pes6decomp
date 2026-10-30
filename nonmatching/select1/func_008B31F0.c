/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D7BC0(void *);
s32 func_008B31F0(void *arg0) {
    return func_001D7BC0(arg0) & 0xFFFF;
}
