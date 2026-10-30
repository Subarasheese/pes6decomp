/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern s32 func_001D7980(void *);
extern s32 D_003EA854;
extern void *D_00CCBF20;

s32 func_00C7B820(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((D_003EA854 != 0) && ((func_001D7980(func_002F9370(D_00CCBF20)) & 0xFF) == 1)) {
        var_s0 = 1;
    }
    return var_s0;
}
