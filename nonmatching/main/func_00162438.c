/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00158930(void *);
M2C_UNK func_00159020(void *);                      /* extern */
M2C_UNK func_00161E78(void *);                      /* extern */
M2C_UNK func_001621E0(void *);                      /* extern */
M2C_UNK func_001623A8(void *);                      /* extern */

void func_00162438(void *arg0) {
    s16 temp_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    if (func_00158930(temp_s0) == 0) {
        func_00161E78(arg0);
    }
    func_00159020(temp_s0);
    if (func_00158930(temp_s0) == 3) {
        func_001621E0(arg0);
    }
    temp_a0 = M2C_FIELD(temp_s0, s16 *, 0x98);
    if ((temp_a0 == 0xA) || (temp_a0 == 0x14) || (temp_a0 == 0xB) || (temp_a0 == 0xC) || (temp_a0 == 0xF)) {
        func_001623A8(arg0);
    }
}
