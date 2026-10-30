/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0085AEA0(s32, s32);                        /* extern */
s32 func_0085B380(s32, s32);                        /* extern */
s32 func_0085B630(s32, s32);                        /* extern */

s32 func_0085ACE0(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1300);
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x1325) == 1;
    temp_a1 = M2C_FIELD(arg0, u8 *, 0x1320) == 1;
    switch (temp_v1) {                              /* irregular */
    case 3:
        if (temp_a1 != 0) {
            var_v0 = func_0085B630(temp_a1, temp_a2);
        } else {
            var_v0 = func_0085B380(temp_a1, temp_a2);
        }
        break;
    case 2:
        if (temp_a2 == 0) {
        default:
            var_v0 = -1;
        } else {
            var_v0 = func_0085AEA0(temp_a1, temp_a2);
        }
        break;
    }
    return var_v0;
}
