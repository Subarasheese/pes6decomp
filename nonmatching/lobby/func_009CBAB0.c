/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E3FF0(s32);                         /* extern */
M2C_UNK func_009E57C0(s32);                         /* extern */
extern u8 *D_00A7DDA8;

void func_009CBAB0(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 != 1;
    if (*D_00A7DDA8 == 2) {
        func_009E57C0(temp_a0);
        return;
    }
    func_009E3FF0(temp_a0);
}
