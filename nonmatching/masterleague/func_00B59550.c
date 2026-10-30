/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001B9DF0(void);
extern u32 func_00B3D3D0(void);
s32 func_00B596A0();                                /* extern */
extern s32 D_003EAEB4;

s32 func_00B59550(void) {
    if (D_003EAEB4 == 0) {
        return 1;
    }
    func_00B3D3D0();
    if (func_001B9DF0() != 0) {
        func_001B9DF0();
    }
    return func_00B596A0();
}
