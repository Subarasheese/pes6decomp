/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_0092F0A8;
extern s32 *D_0092F0AC;
extern M2C_UNK func_008FFA80;
extern M2C_UNK func_008FFB80;

s32 func_008FFE30(void) {
    M2C_UNK *var_v1;

    if (*D_0092F0AC == 0) {
        var_v1 = &func_008FFA80;
    } else {
        var_v1 = &func_008FFB80;
    }
    D_0092F0A8 = var_v1;
    return 1;
}
