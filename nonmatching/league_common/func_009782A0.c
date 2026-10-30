/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00223C60(s32, s32);                    /* extern */
void *func_00970870();                              /* extern */

void func_009782A0(s32 arg0) {
    s32 var_a1;
    void *temp_v0;

    temp_v0 = func_00970870();
    if (temp_v0 != NULL) {
        var_a1 = M2C_FIELD(temp_v0, u8 *, 0x17) & 0x7F;
    } else {
        var_a1 = 0;
    }
    func_00223C60(arg0, var_a1);
}
