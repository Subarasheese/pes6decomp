/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0030CF80(void);
M2C_UNK func_00AEEBD0();                            /* extern */
extern u8 D_003EAF40;

void func_00AEEFE0(void) {
    if (D_003EAF40 & 1) {
        func_00AEEBD0();
        func_0030CF80();
    }
}
