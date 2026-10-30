/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BF9E80(u8);                          /* extern */
M2C_UNK func_00BFE430(u8);                          /* extern */
M2C_UNK func_00BFFA50(u8);                          /* extern */

void func_00855720(void *arg0) {
    u8 temp_a0;

    temp_a0 = M2C_FIELD(arg0, u8 *, 5);
    switch (temp_a0) {                              /* irregular */
    case 10:
        func_00BFFA50(temp_a0);
        return;
    case 11:
        func_00BFE430(temp_a0);
        return;
    case 13:
        func_00BF9E80(temp_a0);
        return;
    }
}
