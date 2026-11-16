/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00338AA0(s32, s32);
s32 func_00338AD0(s32, void *, s32, void *); /* extern */
s32 func_00341910(s32, s32, s32);       /* extern */
extern char D_003E6028[];
extern s8 D_003E9F3C;
extern void func_0033FF70(void);

s32 func_00340520(s32 arg0) {
    s8 var_v0;

    func_00338AA0(func_00338AD0(3, (void *)func_0033FF70, 2, ((void *)D_003E6028)), arg0);
    if (func_00341910(1, 5, 0xA) == 0) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    D_003E9F3C = var_v0;
    return 1;
}
