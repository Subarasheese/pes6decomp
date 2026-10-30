/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
extern u32 func_009A5FE0(void);
M2C_UNK func_009A4650(s32);                         /* extern */
M2C_UNK func_009A4DB0(M2C_UNK);                     /* extern */
M2C_UNK func_009A60C0(s32);                         /* extern */

void func_009A5690(void) {
    u32 temp_v0;

    if (func_009A84E0() != 0) {
        temp_v0 = func_009A5FE0();
        if (temp_v0 == 0) {
            func_009A4DB0(0);
        } else {
            func_009A4650(temp_v0 - 1);
            func_009A60C0(temp_v0 - 1);
        }
    }
}
