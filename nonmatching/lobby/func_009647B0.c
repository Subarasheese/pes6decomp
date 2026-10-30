/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083C7A0(M2C_UNK);                         /* extern */
s32 func_00841540(s32);                             /* extern */
s32 func_00842640();                                /* extern */
extern char D_00A68C58[];

s32 func_009647B0(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v1;

    var_s0 = 0;
    temp_v0 = func_00842640();
    var_v1 = (*(s32 *)D_00A68C58);
    if (var_v1 < 0) {
        var_v1 = (s32) ((s64) (0 << 0x20) >> 0x20);
    }
    temp_a0 = ((s64) ((s64) var_v1 << 0x20) >> 0x20) + 1;
    (*(s32 *)D_00A68C58) = temp_a0;
    if (temp_a0 < 0x3C) {
        return 0;
    }
    (*(s32 *)D_00A68C58) = 0;
    temp_v0_2 = func_00841540(temp_v0);
    switch (temp_v0_2) {                            /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        var_s0 = -3;
        break;
    case 2:                                         /* switch 1 */
        var_s0 = -2;
        break;
    case 1:                                         /* switch 1 */
        var_s0 = -1;
        break;
    case 4:                                         /* switch 1 */
        temp_v0_3 = func_0083C7A0(1);
        switch (temp_v0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 3:                                     /* switch 2 */
            var_s0 = -3;
            break;
        case 2:                                     /* switch 2 */
            var_s0 = -2;
            break;
        case 1:                                     /* switch 2 */
            var_s0 = -1;
            break;
        case 4:                                     /* switch 2 */
            var_s0 = 1;
            break;
        }
        break;
    default:                                        /* switch 1 */
        var_s0 = -4;
        break;
    }
    return var_s0;
}
