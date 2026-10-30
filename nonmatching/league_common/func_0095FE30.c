/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227980(void);
M2C_UNK func_0094C710(M2C_UNK);                     /* extern */

void func_0095FE30(void) {
    if (func_00227980() == 1) {
        func_0094C710(4);
        return;
    }
    func_0094C710(1);
}
