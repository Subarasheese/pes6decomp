/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern s32 func_001D7BC0(void *);
extern s32 func_001D7980(void *);
extern s32 D_003EA860;
extern void *D_00CCBFA0;

s32 func_00C7CC60(s32 arg0) {
    s32 var_s1;
    s32 var_s2;
    s64 temp_s0;

    var_s2 = 0;
    if (D_003EA860 != 0) {
        var_s1 = 0;
        temp_s0 = (s64) (func_001D7BC0(func_002F9370(D_00CCBFA0)) << 0x30) >> 0x30;
        if ((func_001D7980(func_002F9370(D_00CCBFA0)) & 0xFF) == 1) {
            var_s1 = 1;
        }
        if ((temp_s0 == arg0) && (var_s1 == 1)) {
            var_s2 = 1;
        }
    }
    return var_s2;
}
