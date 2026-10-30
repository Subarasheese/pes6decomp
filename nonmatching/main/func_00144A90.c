/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012A6D0(s32, s32);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
extern char D_00500F80[];
extern char D_00503034[];
extern char D_0050303C[];

void func_00144A90(void) {
    M2C_UNK *var_v1;
    s32 var_a0;
    s32 var_s0;

    do {
        var_s0 = 1;
        WaitSema((*(s32 *)D_0050303C));
        var_a0 = 0;
        var_v1 = ((void *)D_00500F80);
loop_2:
        if (M2C_FIELD(var_v1, s32 *, 0x2000) != 0) {
            var_s0 = 0;
        } else {
            var_a0 += 1;
            var_v1 += 0xC;
            if (var_a0 < 0xA) {
                goto loop_2;
            }
        }
        func_00105380((*(s32 *)D_0050303C));
    } while (var_s0 == 0);
    if ((*(s32 *)D_00503034) != 0) {
        func_0012A6D0(1, (*(s32 *)D_00503034));
        (*(s32 *)D_00503034) = 0;
    }
    *(s32 *)0x10003020 &= ~4;
}
