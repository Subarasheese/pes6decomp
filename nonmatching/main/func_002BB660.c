/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002BBD00(s32 *);                       /* extern */

s32 func_002BB660(void *arg0) {
    s32 sp18;
    s32 *var_v1;
    s32 var_v0;

    var_v0 = 8;
    var_v1 = &sp18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp18 = M2C_FIELD(arg0, s32 *, 4);
    func_002BBD00(&sp18);
    return 0;
}
