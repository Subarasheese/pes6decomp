/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_001CDA50(s32);
extern char D_00CBD740[];
extern char D_00CBD870[];

s32 func_00BDE340(s32 arg0, s32 arg1) {
    s32 *var_v0;

    if (func_001CDA50(0) != 5) {
        var_v0 = (arg1 * 4) + (((void *)D_00CBD870) + (arg0 * 0x14));
    } else {
        var_v0 = (arg1 * 4) + (((void *)D_00CBD740) + (arg0 * 0x14));
    }
    return *var_v0;
}
