/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
s32 func_00235800(s32);                             /* extern */
extern s32 D_003EAD3C;

s32 func_00AE72D0(s32 arg0) {
    if (D_003EAD3C == 0) {
        return 0;
    }
    return ((arg0 & 0xFF) + (func_00235800(func_00235B60() & 0xFF) & 0xFF)) & 0xFF;
}
