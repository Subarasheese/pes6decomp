/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0099C730(s32);
s32 func_009E84C0(s32);
s32 func_009E84E0(s32);
s32 func_009E8540(s32);
extern char D_00A7DF30[];
extern char D_00A7DF34[];

s32 func_009E6D70(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 1;
    if ((*(s32 *)D_00A7DF30) != 0) {
        func_009E84C0((*(s32 *)D_00A7DF30));
        if ((*(s32 *)D_00A7DF30) == 0) {
            var_v0 = 1;
        } else {
            var_v0 = func_009E8540((*(s32 *)D_00A7DF30));
        }
        var_s0 = var_v0;
        if ((var_v0 == 1) && ((*(s32 *)D_00A7DF30) != 0)) {
            func_009E84E0((*(s32 *)D_00A7DF30));
            (*(s32 *)D_00A7DF30) = 0;
            func_0099C730((*(s32 *)D_00A7DF34));
        }
    }
    return var_s0;
}
