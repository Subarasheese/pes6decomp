/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0085AB00();                                /* extern */
extern char D_008A3C60[];

s32 func_008171B0(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    switch (M2C_FIELD(((void *)D_008A3C60), s32 *, 0)) {     /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_s1 = 1;
        M2C_FIELD(((void *)D_008A3C60), s32 *, 8) = 0;
        M2C_FIELD(((void *)D_008A3C60), s32 *, 4) = 0;
        var_v0 = M2C_FIELD(((void *)D_008A3C60), s32 *, 0) + 1;
block_24:
        M2C_FIELD(((void *)D_008A3C60), s32 *, 0) = var_v0;
        break;
    default:                                        /* switch 1 */
        var_s1 = -1;
        break;
    case 2:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
        M2C_FIELD(((void *)D_008A3C60), s32 *, 8) = 0;
        var_v0 = M2C_FIELD(((void *)D_008A3C60), s32 *, 0) + 1;
        goto block_24;
    case 3:                                         /* switch 1 */
        temp_v0 = func_0085AB00();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            M2C_FIELD(((void *)D_008A3C60), s32 *, 0) = 0;
            var_s1 = 1;
            break;
        case 0:                                     /* switch 2 */
            var_a1 = 0;
            temp_v1 = M2C_FIELD(((void *)D_008A3C60), s32 *, 8) + 1;
            M2C_FIELD(((void *)D_008A3C60), s32 *, 8) = temp_v1;
            if (M2C_FIELD(((void *)D_008A3C60), s32 *, 0xC) < temp_v1) {
                var_a1 = 1;
            }
            if (var_a1 != 0) {
                var_v0 = 4;
                M2C_FIELD(((void *)D_008A3C60), s32 *, 4) = 1;
                goto block_24;
            }
            break;
        default:                                    /* switch 2 */
            M2C_FIELD(((void *)D_008A3C60), s32 *, 8) = 0;
            M2C_FIELD(((void *)D_008A3C60), s32 *, 4) = 2;
            var_s1 = -1;
            var_v0 = 4;
            goto block_24;
        }
        break;
    case 4:                                         /* switch 1 */
        var_v0 = 3;
        goto block_24;
    }
    return var_s1;
}
