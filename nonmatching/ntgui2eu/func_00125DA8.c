/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00125DC0(void);
extern char D_005B58E8[];

void func_00125DA8(void) {
    (*(s32 *)D_005B58E8) = 0;
    func_00125DC0();
}
