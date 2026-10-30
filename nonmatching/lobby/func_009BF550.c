/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BF5A0(s32);                         /* extern */
s32 func_009BF8E0();                                /* extern */
extern s32 D_003EAD28;

s32 func_009BF550(void) {
    if (D_003EAD28 != 0) {
        return 1;
    }
    func_009BF5A0(func_009BF8E0());
    return 0;
}
