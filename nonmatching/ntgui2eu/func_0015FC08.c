/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00156ED0(void);
M2C_UNK func_0015F990(s32);                         /* extern */
M2C_UNK func_0015FB18(M2C_UNK);                     /* extern */
extern char D_005B3704[];

void func_0015FC08(s32 arg0) {
    s32 temp_a0;

    if (arg0 < 0) {
        temp_a0 = func_00156ED0();
        if (!((*(s32 *)D_005B3704) & 4)) {
            if (temp_a0 == 3) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                func_0015FB18(-1);
                return;
            }
            func_0015F990(arg0);
            return;
        }
        func_0015FB18(-1);
        return;
    }
    func_0015F990(arg0);
}
