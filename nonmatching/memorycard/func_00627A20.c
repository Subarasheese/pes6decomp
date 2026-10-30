/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002E8BD0(void);
s32 func_00627A20(void) {
    s32 temp_v0;

    temp_v0 = func_002E8BD0();
    switch (temp_v0) {                              /* irregular */
    case 0x2B:
        /* fallthrough */
    case 0x33:
    case 0x2E:
    case 0x2F:
        return 1;
    default:
        return 0;
    }
}
