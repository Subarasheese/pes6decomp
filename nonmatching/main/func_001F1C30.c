/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DEA50(void *, void *);              /* extern */

void func_001F1C30(void *arg0) {
    void *temp_a1;

    if (M2C_FIELD(arg0, u8 *, 2) != 0) {
        temp_a1 = M2C_FIELD(arg0, void **, 0x54);
        if (M2C_FIELD(temp_a1, u8 *, 0x79) == 0) {
            return;
        }
        M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x58), s32 *, 0x1C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x1C);
        func_001DEA50(M2C_FIELD(arg0, void **, 0x54), temp_a1);
    }
}
