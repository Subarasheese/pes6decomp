/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB940(void *);
extern void *D_00A7DBF8;

s32 func_009AFF10(void) {
    void *temp_s0;

    temp_s0 = D_00A7DBF8;
    return (M2C_FIELD(temp_s0, s32 *, 0x654) - 1) - func_002DB940(M2C_FIELD(temp_s0, void **, 0x64C));
}
