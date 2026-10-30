/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
u16 *func_002232E0(s32, s32);                       /* extern */
u16 *func_00223420(s32, s32);                       /* extern */
u16 func_00224150(s32, s32, s32);                   /* extern */
u16 func_00224A80(s32, s32);                        /* extern */
s32 func_00225720();                                /* extern */
s32 func_00237530(s32);                             /* extern */
u16 func_00AF6340(s32);                             /* extern */
u16 func_00AF70F0(s32, s32);                        /* extern */
extern char D_00591C09[];

u16 Pes6Team_GetPlayerId(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    u16 *temp_v0_2;
    u16 *temp_v0_3;
    u16 *temp_v0_4;
    u16 *temp_v0_5;
    u16 *temp_v0_6;
    u16 *temp_v0_7;
    u16 *temp_v0_8;
    u16 *temp_v0_9;
    u16 var_v0;
    u16 var_v0_2;

    var_s1 = arg2;
    if ((var_s1 != 0) && (var_s1 != 1) && (var_s1 != 2)) {
        var_s1 = 0;
    }
    if (func_00210DF0() == 2) {
        temp_v1 = arg0 & 0xFFFF;
        if ((temp_v1 >= 0xFE) && (temp_v1 < 0x10E)) {
            return func_00224150(arg0, arg1, var_s1 & 0xFF);
        }
        goto block_15;
    }
    if (func_00210DF0() == 1) {
        temp_s0 = arg0 & 0xFFFF;
        if ((temp_s0 >= 0xCC) && (temp_s0 < 0xDD)) {
            return func_00AF70F0(arg0, arg1);
        }
        if (((*(u8 *)D_00591C09) == 0xE) && (temp_s0 == (func_00225720() & 0xFFFF))) {
            return func_00AF6340(arg1);
        }
        goto block_15;
    }
block_15:
    temp_v0 = arg0 & 0xFFFF;
    if ((((temp_v0 >= 0x40) && (temp_v0 < 0xCC)) || ((temp_v0 >= 0x113) && (temp_v0 < 0x118)) || (temp_v0 == 0x126) || (temp_v0 == 0x127) || (temp_v0 == 0x112)) && ((arg1 & 0xFF) >= 0x20)) {
        return 0U;
    }
    if ((temp_v0 >= 0) && (temp_v0 < 0x40) && ((arg1 & 0xFF) >= 0x17)) {
        return 0U;
    }
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0x123:                                     /* switch 1 */
        var_a0 = arg1 & 0xFF;
        if (var_a0 >= 0x20) {
            if (((temp_v0 == 0x124) && (var_a0 = arg1 & 0xFF, ((var_a0 < 0x20) != 0))) || ((temp_v0 == 0x125) && (var_a0 = arg1 & 0xFF, ((var_a0 < 0x20) != 0)))) {
                goto block_34;
            }
        default:                                    /* switch 1 */
            if (((u32) (temp_v0 - 0x126) < 2U) && ((arg1 & 0xFF) < 0x20)) {
                return M2C_FIELD((((arg1 & 0xFF) * 2) + func_00237530(arg0)), u16 *, 0x1134);
            }
            if ((temp_v0 >= 0x40) && (temp_v0 < 0xCC) && (temp_a1 = arg1 & 0xFF, ((temp_a1 < 0x20) != 0))) {
                switch (var_s1) {                   /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    if ((*(u8 *)D_00591C09) != 4) {
                        temp_v0_2 = func_00223420(arg0, arg1);
                        if (temp_v0_2 != NULL) {
                            var_v0_2 = *temp_v0_2;
                        } else {
                            var_v0_2 = 0;
                        }
                    } else if (temp_v0 != 0x127) {
                        var_v0_2 = func_00224A80(arg0, arg1);
                    } else {
                        var_v0_2 = temp_a1 + 0x7080;
                    }
                    var_v0 = var_v0_2 & 0xFFFF;
                    break;
                case 1:                             /* switch 2 */
                    temp_v0_3 = func_00223420(arg0, arg1);
                    if (temp_v0_3 != NULL) {
                        var_v0 = *temp_v0_3;
                    } else {
                        var_v0 = 0;
                    }
                    break;
                default:                            /* switch 2 */
                    temp_v0_4 = func_002232E0(arg0, arg1);
                    if (temp_v0_4 != NULL) {
                        var_v0 = *temp_v0_4;
                    } else {
                        var_v0 = 0;
                    }
                    break;
                }
            } else if ((temp_v0 == 0x112) && ((arg1 & 0xFF) < 0x20)) {
                temp_v0_5 = func_00223420(arg0, arg1);
                if (temp_v0_5 != NULL) {
                    var_v0 = *temp_v0_5;
                } else {
                    var_v0 = 0;
                }
            } else if ((temp_v0 >= 0x113) && (temp_v0 < 0x118) && ((arg1 & 0xFF) < 0x20)) {
                temp_v0_6 = func_00223420(arg0, arg1);
                if (temp_v0_6 != NULL) {
                    var_v0 = *temp_v0_6;
                } else {
                    var_v0 = 0;
                }
            } else if ((u32) (temp_v0 - 0x110) < 2U) {
                temp_v0_7 = func_00223420(arg0, arg1);
                if (temp_v0_7 != NULL) {
                    var_v0 = *temp_v0_7;
                } else {
                    var_v0 = 0;
                }
            } else if (var_s1 != 0) {
                temp_v0_8 = func_002232E0(arg0, arg1);
                if (temp_v0_8 != NULL) {
                    var_v0 = *temp_v0_8;
                } else {
                    var_v0 = 0;
                }
            } else {
                temp_v0_9 = func_00223420(arg0, arg1);
                if (temp_v0_9 != NULL) {
                    var_v0 = *temp_v0_9;
                } else {
                    var_v0 = 0;
                }
            }
            goto block_103;
        }
block_34:
        var_v0 = var_a0 + (((temp_v0 - 0x123) << 5) + 0x7000);
block_103:
        return var_v0 & 0xFFFF;
    }
}
