/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E1CA0(void *);
extern void func_001BC040(s32);
M2C_UNK func_001BBFD0(s32);                         /* extern */

void func_002DF960(void *arg0) {
    s32 var_s1;
    void *var_s0;

    if (arg0 != NULL) {
        var_s1 = 0;
        var_s0 = arg0;
        do {
            func_002E1CA0(var_s0 + 0x28);
            var_s1 += 1;
            var_s0 += 0x24;
        } while (var_s1 < 2);
        func_001BC040(M2C_FIELD(arg0, s32 *, 0x70));
        func_001BBFD0(M2C_FIELD(arg0, s32 *, 0x70));
    }
}
