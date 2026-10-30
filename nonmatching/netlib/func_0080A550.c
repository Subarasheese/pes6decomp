/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0080A070();                            /* extern */
extern char D_0088B030[];

s32 func_0080A550(s32 arg0) {
    s32 *var_s0;

    if (((void *)D_0088B030) == NULL) {
        var_s0 = NULL;
    } else if (arg0 < 0) {
        var_s0 = NULL;
    } else if (arg0 < 5) {
        var_s0 = ((void *)D_0088B030) + (arg0 * 0x4D18);
    } else {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        return 0;
    }
    func_0080A070();
    *var_s0 = 0;
    return 1;
}
