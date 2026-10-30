/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s64 func_001AD6F8(void);
extern s32 func_001378E8(void);
M2C_UNK func_001236B8(s32, s32, M2C_UNK);           /* extern */
extern char D_005B58F0[];

void func_00139B70(void) {
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), func_001378E8() == 0, 0x40);
    }
    var_s2 = 0;
loop_4:
    if (var_s2 < 3) {
        var_s1 = 0;
loop_8:
        if (var_s1 < 4) {
            if (func_001AD6F8() == 0) {
                var_s1 += 1;
                goto loop_8;
            }
            var_s3 = 1;
        }
        if (var_s3 != 0) {
            var_s3 = ((var_s2 ^ 2) != 0) ? 0 : var_s3;
            var_s2 += 1;
            goto loop_4;
        }
    }
    temp_a0 = *(s32 *)0x5B58F8;
    if (temp_a0 != 0) {
        func_001236B8(temp_a0, var_s3, 0x40);
    }
}
