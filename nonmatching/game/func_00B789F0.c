/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292AA0(u8);                              /* extern */
s32 func_00B78BA0();                                /* extern */
s32 func_00B78D80();                                /* extern */
extern char D_00591BBD[];
extern char D_00591BBE[];
extern char D_00591BBF[];
extern char D_00591DCD[];
extern char D_005922E8[];

s32 func_00B789F0(void) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if (((*(u8 *)D_005922E8) == 0) && ((*(u8 *)D_00591DCD) != 4)) {
        switch ((*(u8 *)D_00591DCD)) {                       /* irregular */
        case 1:
            if (func_00292AA0((*(u8 *)D_00591DCD)) != 0) {
                var_v0 = func_00B78BA0();
            } else {
                var_v0 = func_00B78D80();
            }
            if (var_v0 == 2) {
                if (((*(u8 *)D_00591BBD) == 0) && ((*(u8 *)D_00591BBE) == 0)) {
                    goto block_26;
                }
block_25:
            default:
                return 0;
            }
            goto block_26;
        case 2:
            if (func_00292AA0((*(u8 *)D_00591DCD)) != 0) {
                var_v0_2 = func_00B78BA0();
            } else {
                var_v0_2 = func_00B78D80();
            }
            if ((var_v0_2 != 2) && ((*(u8 *)D_00591BBF) != 0)) {
                goto block_26;
            }
            goto block_25;
        case 3:
            if (func_00292AA0((*(u8 *)D_00591DCD)) != 0) {
                var_v0_3 = func_00B78BA0();
            } else {
                var_v0_3 = func_00B78D80();
            }
            if (var_v0_3 == 2) {
                if ((*(u8 *)D_00591BBE) == 0) {
                    goto block_26;
                }
                goto block_25;
            }
            goto block_26;
        }
    } else {
block_26:
        return 1;
    }
}
