/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00103850(M2C_UNK, M2C_UNK);            /* extern */

void func_00103B00(void *arg0, s32 arg1) {
    s32 *temp_a1;

    func_00103850(2, 3);
    temp_a1 = M2C_FIELD(arg0, s32 **, 0);
    M2C_FIELD(arg0, s32 **, 0) = (s32 *) (temp_a1 + 4);
    M2C_FIELD(arg0, s32 **, 0xC) = temp_a1;
    *temp_a1 = (arg1 != 0) ? 0xD1000000 : 0x51000000;
}
