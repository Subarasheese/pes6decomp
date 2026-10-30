/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u8 func_00952680(M2C_UNK);                          /* extern */
s32 func_00952DE0();                                /* extern */
M2C_UNK func_00953170();                            /* extern */
s32 func_00953310(s32, s32, s32);                   /* extern */
extern char D_00A76BF2[];
extern char D_00A76BF3[];
extern char D_00A76BF6[];
extern char D_00A76BF7[];

s32 func_00952FB0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    u8 var_v0;

    temp_v1 = arg0 & 0xFF;
    var_s0 = 0;
    if (temp_v1 & 2) {
        temp_v0 = func_00952DE0() & 0xFF;
        switch (temp_v0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_s0 = 1 & 0xFF;
            (*(u8 *)D_00A76BF2) = 1;
            break;
        case 1:                                     /* switch 1 */
            var_s0 = 1 & 0xFF;
            (*(u8 *)D_00A76BF6) = 1;
            break;
        default:                                    /* switch 1 */
            temp_v0_2 = func_00952DE0() & 0xFF;
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                var_s0 = 2;
                (*(u8 *)D_00A76BF3) = 1;
                break;
            case 1:                                 /* switch 2 */
                var_s0 = 2;
                (*(u8 *)D_00A76BF7) = 1;
                break;
            }
            break;
        }
    } else {
        if (!(temp_v1 & 0x40)) {
            (*(u8 *)D_00A76BF2) = func_00952680(0);
            (*(u8 *)D_00A76BF6) = func_00952680(1);
            (*(u8 *)D_00A76BF3) = func_00952680(0);
            var_v0 = func_00952680(1);
            var_s0 = 3;
            goto block_17;
        }
        (*(u8 *)D_00A76BF2) = func_00952680(0);
        (*(u8 *)D_00A76BF6) = func_00952680(1);
        var_s0 = 4;
        if ((*(u8 *)D_00A76BF2) == (*(u8 *)D_00A76BF6)) {
            (*(u8 *)D_00A76BF3) = func_00952680(0);
            var_v0 = func_00952680(1);
            var_s0 = 3;
block_17:
            (*(u8 *)D_00A76BF7) = var_v0;
        }
    }
    if (func_00953310(arg0, arg1, arg2) == 1) {
        func_00953170();
        var_s0 = 3;
    }
    return var_s0;
}
