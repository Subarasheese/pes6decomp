/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009885A0(void);
M2C_UNK func_00989370();                            /* extern */
extern s32 D_003EA978;

void func_0098A050(void) {
    if (D_003EA978 != 0) {
        func_009885A0();
        func_00989370();
    }
}
