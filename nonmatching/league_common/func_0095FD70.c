/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
M2C_UNK func_00224EB0(s32, s32, s32);               /* extern */
s32 func_00225680(s32);                             /* extern */
extern char D_00591C09[];

void func_0095FD70(void) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;

    var_s2 = 0;
    do {
        temp_s1 = func_00225680(var_s2 & 0xFF) & 0xFFFF;
        if (temp_s1 >= 0x40) {
            var_s0 = 0x20;
        } else {
            var_s0 = 0x17;
        }
        if (((*(u8 *)D_00591C09) != 0xE) || (var_s2 != (func_00225820() & 0xFF))) {
            var_s3 = 0;
            if (var_s0 > 0) {
                do {
                    func_00224EB0(temp_s1, var_s2 & 0xFF, var_s3 & 0xFF);
                    var_s3 += 1;
                } while (var_s3 < var_s0);
            }
        }
        var_s2 += 1;
    } while (var_s2 < 0x50);
}
