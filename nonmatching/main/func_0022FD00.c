/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
s32 func_002262E0(s32);                             /* extern */
s32 func_0022B1B0();                                /* extern */
extern char D_00591C09[];

s32 func_0022FD00(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if ((func_00309420() != 0) == 1) {
        var_s0 = 0xFF;
    } else if (((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
        var_s0 = 0xFF;
    } else {
        temp_s0 = func_00226710() & 0xFF;
        if ((func_00309420() != 0) != 1) {
            temp_v1 = func_002262E0(temp_s0) & 0xFF;
            switch (temp_v1) {                      /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                var_v0 = 1 & 0xFF;
                break;
            default:                                /* switch 1 */
                var_v0 = 0xFF;
                break;
            case 3:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
            case 0:                                 /* switch 1 */
            case 2:                                 /* switch 1 */
                var_v0 = 0;
                break;
            }
        } else {
            var_v0 = 0xFF;
        }
        var_s0 = var_v0 & 0xFF;
    }
    if ((func_00309420() != 0) == 1) {
        var_v0_2 = 0xFF;
    } else {
        if ((func_00309420() != 0) == 1) {
            var_v0_3 = 0xFF;
        } else {
            temp_a0 = func_002262E0(func_00226710()) & 0xFF;
            if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
                var_v0_3 = 0xFF;
            } else {
                var_v0_3 = temp_a0 & 0xFF;
            }
        }
        temp_v1_2 = var_v0_3 & 0xFF;
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_v0_2 = 1 & 0xFF;
            break;
        case 3:                                     /* switch 2 */
            var_v0_2 = 3 & 0xFF;
            break;
        case 2:                                     /* switch 2 */
            var_v0_2 = 2 & 0xFF;
            break;
        default:                                    /* switch 2 */
            var_v0_2 = 0xFF;
            break;
        case 5:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            var_v0_2 = 0;
            break;
        }
    }
    if ((var_v0_2 & 0xFF) == 2) {
        return 0;
    }
    if ((func_00309420() != 0) != 1) {
        if ((var_s0 & 0xFF) != 1) {
            return 0;
        }
        return func_0022B1B0();
    }
    return 0;
}
