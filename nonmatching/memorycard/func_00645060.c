/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00152130(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_001B6A30(s32, s32, u32, s32 *);            /* extern */
s32 func_001BE550(M2C_UNK, s32);                    /* extern */
s32 func_001BE5B0(M2C_UNK, M2C_UNK, u32, s32 *);    /* extern */
s32 func_0023F330(s32, M2C_UNK, u32, s32 *);        /* extern */
s32 func_002E8BD0();                                /* extern */
extern char D_00510FD0[];
extern char D_0065B470[];
extern char D_0065B4C0[];

s32 func_00645060(void *arg0, s32 arg1) {
    s32 *var_a2_2;
    s32 *var_a3;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    u32 var_a2;
    u32 var_a3_2;

    temp_v0 = func_002E8BD0();
    var_a0 = M2C_FIELD(arg0, s32 *, 0x58);
    var_v1 = 1;
    var_a3_2 = 0;
    var_a2_2 = ((void *)D_0065B470);
loop_1:
    if (temp_v0 != *var_a2_2) {
        var_a3_2 += 1;
        var_a2_2 += 4;
        if (var_a3_2 >= 0x12U) {
            if (var_a0 == 0) {
                var_a0 = 1;
            }
            var_a2 = 0;
            var_a3 = ((void *)D_0065B4C0);
loop_9:
            temp_a1 = *var_a3;
            if (temp_v0 != temp_a1) {
                var_a2 += 1;
                var_a3 += 4;
                if (var_a2 >= 0xBU) {
                    switch (temp_v0) {              /* switch 1; irregular */
                    case 11:                        /* switch 1 */
                        var_v0 = func_001BE5B0(0, 0xB, var_a2, var_a3);
block_47:
                        var_v1 = var_v0;
                        break;
                    default:                        /* switch 1 */
                        var_a2 = 0xF;
                        if ((temp_v0 != 0xF) && (var_a2 = 5, (temp_v0 != 5)) && (var_a2 = 3, (temp_v0 != 3)) && (var_a3 = (s32 *)2, (temp_v0 != 2))) {
                            switch (temp_v0) {      /* switch 2; irregular */
                            case 22:                /* switch 2 */
                                var_v0 = func_00152130(1, 0x10, 0x16, 2);
                                goto block_47;
                            case 7:                 /* switch 2 */
                                if (arg1 == 1) {
                                    var_v0 = func_001BE5B0(0, 1, 0x16U, (s32 *)2);
                                    goto block_47;
                                }
                                if (arg1 == 2) {
                                    if (M2C_FIELD(arg0, u8 *, 0x55) != 1) {
                                        var_a0 = 0x4FD5;
                                    }
                                    var_v0 = func_001B6A30(var_a0, 1, 0x16U, (s32 *)2);
                                    goto block_47;
                                }
                                break;
                            default:                /* switch 2 */
                                var_v1 = 1;
                                break;
                            }
                        } else {
                        case 16:                    /* switch 1 */
                            switch (arg1) {         /* switch 3; irregular */
                            case 1:                 /* switch 3 */
                                if ((*(s32 *)D_00510FD0) != 4) {
                                    var_v0 = func_001BE5B0(0, 0x10, var_a2, var_a3);
                                } else {
                                    var_v0 = func_001BE550(0, func_0023F330(var_a0, 0x10, var_a2, var_a3));
                                }
                                goto block_47;
                            case 2:                 /* switch 3 */
                                var_v0 = func_001B6A30(var_a0, 0x10, var_a2, var_a3);
                                goto block_47;
                            }
                        }
                        break;
                    }
                    return var_v1;
                }
                goto loop_9;
            }
            return func_001B6A30(var_a0, temp_a1, var_a2, var_a3);
        }
        goto loop_1;
    }
    return 1;
}
