/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CEE8C0();                            /* extern */
M2C_UNK func_00CF0CE0();                            /* extern */
extern s32 D_003EB324;

void func_00CEFEB0(void) {
    if (D_003EB324 == 0) {
        func_00CEE8C0();
        return;
    }
    func_00CF0CE0();
}
