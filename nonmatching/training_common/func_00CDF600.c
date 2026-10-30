/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CF4F20(s32);                         /* extern */
M2C_UNK func_00CF5730();                            /* extern */
extern s32 D_003E7E1C;

void func_00CDF600(void) {
    func_00CF4F20(D_003E7E1C + 0x190);
    func_00CF5730();
}
