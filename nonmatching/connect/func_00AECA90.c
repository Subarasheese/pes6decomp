/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9630(void);
extern char D_00B02B7C[];

void func_00AECA90(void) {
    func_001B9630();
    (*(u8 *)D_00B02B7C) = ((*(u8 *)D_00B02B7C) & ~1) | (0 & 1);
}
