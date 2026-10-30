/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00264350(void);
extern int func_002644E0(void);
extern int func_002643F0(void);
s32 func_00CDCCB0();                                /* extern */

s32 func_00CE2680(void) {
    s32 temp_v0;
    void *var_v1;

    temp_v0 = func_00CDCCB0();
    switch (temp_v0) {                              /* irregular */
    default:
        var_v1 = NULL;
        break;
    case 0:
        var_v1 = func_002644E0() + 0x4B3C;
        break;
    case 1:
        var_v1 = func_002643F0() + 0x39C;
        break;
    case 2:
        var_v1 = func_00264350() + 0x780;
        break;
    }
    if (var_v1 != NULL) {
        if ((M2C_FIELD(var_v1, s32 *, 0) != 0) && (M2C_FIELD(var_v1, s32 *, 8) != 0)) {
            return 1;
        }
        goto block_14;
    }
block_14:
    return 0;
}
