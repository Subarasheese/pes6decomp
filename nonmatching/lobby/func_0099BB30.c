/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001FC840(void);
extern void func_002CAA30(void);
M2C_UNK func_002CB600(M2C_UNK);                     /* extern */

s32 func_0099BB30(void) {
    func_002CB600(0x12);
    func_002CAA30();
    func_001FC840();
    return 1;
}
