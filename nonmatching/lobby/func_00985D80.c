/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7D728;
extern char D_00A7D730[];
extern char D_00A7D738[];
extern char D_00A7D740[];
extern char D_00A7D748[];
extern char D_00A7D750[];

s32 func_00985D80(void) {
    if ((*(s32 *)D_00A7D750) != 1) {
        return 0;
    }
    func_001D7D60(D_00A7D728, 0);
    (*(s32 *)D_00A7D730) = 0;
    (*(s32 *)D_00A7D748) = 0;
    (*(s32 *)D_00A7D740) = 0;
    (*(s32 *)D_00A7D738) = 0;
    return 1;
}
