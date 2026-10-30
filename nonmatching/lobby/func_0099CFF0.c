/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4D80(s32);
extern char D_00A7DB20[];

s32 func_0099CFF0(s32 arg0) {
    func_002F4D80((*(s32 *)D_00A7DB20));
    return 1;
}
