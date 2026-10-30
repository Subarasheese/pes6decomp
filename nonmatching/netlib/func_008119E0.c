/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
void *func_00847280(s16);                           /* extern */
s16 *func_008472D0();                               /* extern */

s32 func_008119E0(s32 arg0) {
    s32 var_s0;
    s64 var_s1;
    void *temp_v0;

    if ((func_002DCA40() != 0) || (arg0 == 0)) {
        var_s0 = 0;
        var_s1 = 1;
        do {
            temp_v0 = func_00847280((s16) ((s64) (var_s1 << 0x30) >> 0x30));
            if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u8 *, 0x51) != 2)) {
                var_s0 += 1;
            }
            var_s1 += 1;
        } while (var_s1 < 5);
        return var_s0;
    }
    return func_00847280(*func_008472D0()) != NULL;
}
