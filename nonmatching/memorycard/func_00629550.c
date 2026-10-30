/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002EE1E0(s32);
extern s32 func_002EDDB0(s32);
s32 func_00629550(s32 arg0) {
    return func_002EE1E0(func_002EDDB0(arg0)) != NULL;
}
