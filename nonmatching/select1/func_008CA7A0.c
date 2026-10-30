/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */

void func_008CA7A0(void **arg0) {
    s32 var_s1;
    void **var_s0;

    if (arg0 != NULL) {
        var_s1 = 0;
        var_s0 = arg0;
        do {
            func_001EDD90(M2C_FIELD(var_s0, s32 *, 0x178));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        func_001D4E00(*arg0);
        func_00153FA0(arg0);
    }
}
