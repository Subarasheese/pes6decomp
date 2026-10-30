/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227980(void);
extern s32 func_00226710(void);
M2C_UNK func_0093D6F0(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_003E7B0C;

void func_009610A0(void) {
    M2C_FIELD(D_003E7B0C, u8 *, 0x2E) = (u8) M2C_FIELD(D_003E7B0C, u8 *, 0x26);
    if ((func_00227980() == 1) && ((func_00226710() & 0xFF) != 0x1F) && ((func_00226710() & 0xFF) != 0x23)) {
        func_0093D6F0(1, 4);
        return;
    }
    func_0093D6F0(1, 1);
}
