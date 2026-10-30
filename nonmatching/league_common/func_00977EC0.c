/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * Pes6Player_GetParams(int);
s32 func_00210DF0();                                /* extern */
s32 func_00223D30(s32);                             /* extern */
void *func_00970870(s32);                           /* extern */

s32 func_00977EC0(s32 arg0) {
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;

    if (func_00210DF0() != 2) {
        if ((arg0 & 0xFFFF) >= 0x1388) {
            temp_v0 = Pes6Player_GetParams(arg0);
            if (temp_v0 != NULL) {
                return M2C_FIELD(temp_v0, u8 *, 0x17) & 0x7F;
            }
            return 0;
        }
        return func_00223D30(arg0);
    }
    temp_v0_2 = func_00970870(arg0);
    if (temp_v0_2 != NULL) {
        var_v0 = M2C_FIELD(temp_v0_2, u8 *, 0x17) & 0x7F;
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
