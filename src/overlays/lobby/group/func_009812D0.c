/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00981320(s32);
extern char D_00A7D610[];
extern char D_00A7D618[];

s32 func_009812D0(void) {
    s32 var_v0;

    if ((*(s32 *)D_00A7D610) != 0) {
        (*(s32 *)D_00A7D618) = 1;
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        func_00981320(0);
        (*(s32 *)D_00A7D618) = 0;
    }
    return 0;
}
