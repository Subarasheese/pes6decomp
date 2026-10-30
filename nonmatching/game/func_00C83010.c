/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
s32 func_001C7E10(M2C_UNK *, void *);               /* extern */
M2C_UNK func_00C830C0();                            /* extern */
extern void *D_003EA880;
extern char D_0053C9D0[];

void func_00C83010(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    if (D_003EA880 != NULL) {
        var_s2 = 0;
        var_s1 = 0;
        var_s0 = ((void *)D_0053C9D0);
loop_2:
        if (func_001C7E10(var_s0, D_003EA880 + var_s1) == 0) {
            var_s2 += 1;
            var_s1 += 0x2E;
            var_s0 += 0x2E;
            if (var_s2 >= 8) {

            } else {
                goto loop_2;
            }
        } else {
            var_s3 = 1;
        }
    }
    if (var_s3 == 1) {
        func_00C830C0();
    }
    if (D_003EA880 != NULL) {
        func_00153FA0(D_003EA880);
        D_003EA880 = NULL;
    }
}
