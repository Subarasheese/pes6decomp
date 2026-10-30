/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s8 func_00842890(void);
s32 func_00825610();                                /* extern */
extern char D_00886DB0[];
extern char D_00886E90[];
extern char D_00886F70[];

s32 func_0081E320(s32 arg0) {
    s32 *var_v0;
    s32 temp_v0;
    s64 temp_s0;

    temp_s0 = (s64) (func_00842890() << 0x38) >> 0x38;
    if ((arg0 < 0) || (arg0 >= 0x12)) {
        return 0;
    }
    if (temp_s0 < 0) {
        return 0;
    }
    if (temp_s0 >= 3) {
        return 0;
    }
    temp_v0 = func_00825610();
    switch (temp_v0) {                              /* irregular */
    case 6:
        var_v0 = (temp_s0 * 4) + (((void *)D_00886F70) + (arg0 * 0xC));
        break;
    case 5:
        var_v0 = (temp_s0 * 4) + (((void *)D_00886E90) + (arg0 * 0xC));
        break;
    case 4:
        var_v0 = (temp_s0 * 4) + (((void *)D_00886DB0) + (arg0 * 0xC));
        break;
    default:
        var_v0 = (temp_s0 * 4) + (((void *)D_00886DB0) + (arg0 * 0xC));
        break;
    }
    return *var_v0;
}
