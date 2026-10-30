/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229310(void);
s32 func_0097D080(M2C_UNK);                         /* extern */
extern s32 D_003EAD98;

s32 func_00B2BE20(void) {
    func_00229310();
    if (D_003EAD98 != 0) {
        return (func_0097D080(3) & 0xFF) == 1;
    }
    return 0;
}
