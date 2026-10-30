/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
s32 func_002262E0(s32);                             /* extern */

s32 func_00230750(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    if ((func_00309420() != 0) == 1) {
        var_v0 = 0xFF;
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_v1 = func_002262E0(arg0) & 0xFF;
    var_v0 = 1;
    switch (temp_v1) {                              /* irregular */
    case 3:
        return 0;
    case 5:
    case 0:
    case 2:
        return 0;
    case 1:
        return var_v0;
    }
}
