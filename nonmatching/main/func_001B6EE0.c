/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DEFA0(void *, void *);
extern s32 func_001DEED0(void *);
M2C_UNK func_001DF250(void *, f32 *);               /* extern */

s32 func_001B6EE0(void *arg0) {
    f32 sp38;
    f32 *var_v1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    var_v0 = 8;
    var_v1 = &sp38;
    var_s1 = 0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_001DEED0(arg0);
    if ((temp_v0 != 2) && (temp_v0 != 1)) {

    } else {
        func_001DEFA0(arg0, &sp38);
        if (sp38 < 1.0f) {
            sp38 = 1.0f;
            func_001DF250(arg0, &sp38);
        }
        var_s1 = 1;
    }
    return var_s1;
}
