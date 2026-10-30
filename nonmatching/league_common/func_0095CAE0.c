/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022D970(void);
extern void func_0022D8F0(s32);
extern s32 func_00226710(void);
s32 func_00230100(s32);                             /* extern */
s32 func_0095D110(s32, void *);                     /* extern */

void func_0095CAE0(void) {
    s32 temp_s0;

    temp_s0 = func_00230100(func_00226710() & 0xFF);
    func_0022D8F0(func_0095D110(temp_s0, func_0022D970()) & 0xFFFF);
}
