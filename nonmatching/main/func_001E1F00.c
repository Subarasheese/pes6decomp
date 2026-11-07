/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001DE9D0(void);
M2C_UNK func_001E2080(void *);                      /* extern */
M2C_UNK func_001E2E50(void *);                      /* extern */
M2C_UNK func_001E4FB0();                            /* extern */

void func_001E1F00(void *arg0) {
    s32 temp_v0_2;
    s32 var_v1;
    u8 temp_v0;

    func_001DE9D0();
    func_001E4FB0();
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x42);
    if (temp_v0 != 0) {
        var_v1 = temp_v0 == 2;
    } else {
        temp_v0_2 = func_001DE9D0();
        if ((temp_v0_2 != 5) && (temp_v0_2 != 6) && (temp_v0_2 != 7)) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
    }
    if (var_v1 != 1) {
        func_001E2080(arg0);
    } else {
        func_001E2E50(arg0);
    }
}
