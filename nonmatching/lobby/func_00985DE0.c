/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7D728;
extern char D_00A7D750[];

s32 func_00985DE0(void) {
    if ((*(s32 *)D_00A7D750) != 1) {
        return 0;
    }
    func_001D7D60(D_00A7D728, 1);
    return 1;
}
