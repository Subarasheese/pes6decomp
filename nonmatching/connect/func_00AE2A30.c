/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AECB90(void);
extern u8 D_003EAF30;

void func_00AE2A30(void) {
    if (!(D_003EAF30 & 1)) {
        func_00AECB90();
    }
}
