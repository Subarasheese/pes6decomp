/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00229A70(void);
extern void func_00229C70(s32);
extern s32 func_002293F0(void);
s32 func_00225B20(u8);                              /* extern */
M2C_UNK func_00226760(M2C_UNK);                     /* extern */
s32 func_00236680(s32);                             /* extern */

void func_00AFA8A0(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    u8 *var_s1;

    temp_v0 = func_002293F0();
    if (temp_v0 != 0) {
        var_s0 = 0;
        var_s1 = temp_v0 + (func_00236680(func_00229A70() & 0xFF) & 0xFF);
        var_s2 = 0;
loop_2:
        if (func_00225B20(*var_s1) != 1) {
            var_s0 += 1;
            var_s1 += 1;
            if (var_s0 >= 0x10) {

            } else {
                goto loop_2;
            }
        } else {
            var_s2 = 1 & 0xFF;
        }
        if ((var_s2 & 0xFF) == 1) {
            func_00229C70(0);
            func_00226760(0x1C);
            return;
        }
        func_00229C70(1);
        func_00226760(0x20);
    }
}
