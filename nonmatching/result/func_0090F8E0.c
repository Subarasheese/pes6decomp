/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void *D_00921E2C;
extern void *D_00921E30;

void func_0090F8E0(s32 arg0) {
    func_001EDAE0(D_00921E2C, arg0 & 0xFF);
    func_001EDAE0(D_00921E30, arg0 & 0xFF);
}
