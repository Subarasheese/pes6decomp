/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0026C760(M2C_UNK);                         /* extern */
s32 func_0081D2C0();                                /* extern */
M2C_UNK func_00825820();                            /* extern */
s32 func_0082B060();                                /* extern */
s32 func_00832280();                                /* extern */
s32 func_0084A750();                                /* extern */
s32 func_00884030();                                /* extern */
s32 func_0090F820();                                /* extern */
M2C_UNK func_0090FD20(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00D0F650();                                /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */
extern char D_0058D7A8[];
extern char D_0058D7A9[];
extern char D_0058D7AA[];
extern char D_00923FE0[];
extern char D_00923FE4[];

void func_008FF160(void) {
    s32 var_v1;
    s32 var_v1_2;

    if ((*(s8 *)D_0058D7AA) != 0) {
        var_v1 = (*(s8 *)D_0058D7A8) != 0;
        if (var_v1 == 0) {
            var_v1 = (*(s8 *)D_0058D7A9) != 0;
        }
        if (var_v1 == 0) {
            var_v1 = func_00884030() != 0;
        }
        (*(s32 *)D_00923FE0) = var_v1;
        if (func_0090F820() != 0) {
            if (func_0084A750() != 0) {
                var_v1_2 = 1;
            } else {
                var_v1_2 = func_0081D2C0() > 0;
                if (var_v1_2 != 0) {
                    var_v1_2 = (*(s8 *)D_0058D7A9) == 0;
                }
            }
            if (var_v1_2 == 0) {
                func_0090FD20(0xB, 0);
                func_0090FD20(0xA, 0);
                func_00D0F680(0);
            }
        }
        if (((*(s8 *)D_0058D7AA) == 6) && ((*(s32 *)D_00923FE4) == 0) && (func_0026C760(6) != 0) && (func_00D0F650() != 0) && (func_00832280() != 0)) {
            func_00D0F680(0);
            func_00825820();
            (*(s32 *)D_00923FE4) = 1;
        }
        if (((*(s8 *)D_0058D7A9) == 0) && (func_0082B060() != 0)) {
            (*(s8 *)D_0058D7A9) = 1;
        }
    }
}
