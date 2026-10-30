/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA10(void);
extern s32 func_002DE2D0(s32);
extern s32 D_003E77F8;

s32 func_00846B60(void) {
    func_002DCA10();
    if (D_003E77F8 != -1) {
        func_002DE2D0(D_003E77F8);
    }
    D_003E77F8 = -1;
    return 0;
}
