/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern s32 D_003EA37C;
extern char D_008B23E4[];
extern char D_008B23E8[];
extern char D_008B23EC[];
extern char D_008B23F0[];

void func_0087B490(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a0;

    if (D_003EA37C != 0) {
        (*(s32 *)D_008B23E4) = arg1;
        arg1 = arg2 == 0;
        (*(s32 *)D_008B23E8) = arg0;
        if (arg1 == 0) {
            arg1 = arg2 == 2;
        }
        var_a0 = arg2 == 0;
        (*(s32 *)D_008B23EC) = arg1;
        if (var_a0 == 0) {
            var_a0 = arg2 == 1;
        }
        (*(s32 *)D_008B23F0) = var_a0;
    }
}
