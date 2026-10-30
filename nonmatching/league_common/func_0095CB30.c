/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022D9B0(void);
extern void func_0022D930(s32);
extern s32 func_00226710(void);
s32 func_00230100(s32);                             /* extern */
s32 func_0095D750(s32, void *);                     /* extern */

void func_0095CB30(void) {
    s32 temp_s0;

    temp_s0 = func_00230100(func_00226710() & 0xFF);
    func_0022D930(func_0095D750(temp_s0, func_0022D9B0()) & 0xFFFF);
}
