/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FCC;

void func_00917490(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s2 = 0;
    var_s1 = 0;
    do {
        var_s3 = 0;
        var_s0 = 0;
loop_2:
        func_00C75330(D_00923FCC + var_s1 + var_s0 + 0x18);
        var_s3 += 1;
        var_s0 += 0x30;
        if (var_s3 < 7) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s1 += 0x150;
    } while (var_s2 < 2);
    func_00C75330(D_00923FCC);
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
