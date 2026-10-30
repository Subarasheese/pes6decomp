/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0085ACE0(s32);                             /* extern */
extern char D_008A3C60[];

s32 func_008172E0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s1;

    var_s1 = 0;
    switch (M2C_FIELD(((void *)D_008A3C60), s32 *, 0)) {     /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_s1 = 1;
        break;
    case 1:                                         /* switch 1 */
        M2C_FIELD(((void *)D_008A3C60), s32 *, 0x14) = arg2;
        M2C_FIELD(((void *)D_008A3C60), s32 *, 0x10) = arg1;
        temp_v0 = func_0085ACE0(arg1);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            M2C_FIELD(((void *)D_008A3C60), s32 *, 0) = (s32) (M2C_FIELD(((void *)D_008A3C60), s32 *, 0) + 1);
            break;
        case 0:                                     /* switch 2 */
            var_a1 = 0;
            temp_v1 = M2C_FIELD(((void *)D_008A3C60), s32 *, 8) + 1;
            M2C_FIELD(((void *)D_008A3C60), s32 *, 8) = temp_v1;
            if (M2C_FIELD(((void *)D_008A3C60), s32 *, 0xC) < temp_v1) {
                var_a1 = 1;
            }
            if (var_a1 != 0) {
                M2C_FIELD(((void *)D_008A3C60), s32 *, 4) = 1;
                M2C_FIELD(((void *)D_008A3C60), s32 *, 0) = 4;
            }
            break;
        default:                                    /* switch 2 */
            M2C_FIELD(((void *)D_008A3C60), s32 *, 4) = 2;
            M2C_FIELD(((void *)D_008A3C60), s32 *, 0) = 4;
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        M2C_FIELD(((void *)D_008A3C60), s32 *, 8) = 0;
        M2C_FIELD(((void *)D_008A3C60), s32 *, 4) = 0;
        M2C_FIELD(((void *)D_008A3C60), s32 *, 0) = (s32) (M2C_FIELD(((void *)D_008A3C60), s32 *, 0) + 1);
        break;
    default:                                        /* switch 1 */
    case 4:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
        var_s1 = -1;
        break;
    }
    return var_s1;
}
