/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */

void func_00B62F70(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x4BD);
        switch (temp_a0) {                          /* irregular */
        case 1:
            func_00958000(0x3F);
            break;
        case 0:
            func_00958000(0x3E);
            return;
        }
    }
}
