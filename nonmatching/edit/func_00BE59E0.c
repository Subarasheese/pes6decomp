/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC5FA0(s32);
extern void func_00222E80(int, int, u16);
s32 func_00BC5660(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_00BC5750(s32, s32, s32);               /* extern */
M2C_UNK func_00C04330();                            /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */

void func_00BE59E0(u16 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s1;

    temp_s0 = func_00BC5FA0(arg1) & 0xFF;
    var_s1 = 0;
loop_1:
    if (func_00BC5660(arg1, var_s1 & 0xFF, 0) == 0) {
        var_s1 += 1;
        if (var_s1 >= 0x20) {
            var_s1 = -1;
        } else {
            goto loop_1;
        }
    }
    func_00222E80(arg1, var_s1 & 0xFF, arg0);
    func_00BC5750(arg1, var_s1 & 0xFF, temp_s0 & 0xFF);
    func_00C04330();
    func_00C1B380(7);
    func_00C1B380(6);
}
