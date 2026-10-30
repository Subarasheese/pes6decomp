/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001045C8();                            /* extern */
M2C_UNK func_00104618();                            /* extern */
extern s32 D_00602154;

void func_00103998(s32 arg0) {
    D_00602154 = arg0;
    func_001045C8();
    if (D_00602154 != 0) {
        func_00104618();
    }
}
