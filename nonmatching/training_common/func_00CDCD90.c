/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00CE2B30(u32);
s32 func_00CDD170();                                /* extern */

void func_00CDCD90(void) {
    if (func_00CDD170() == 0) {
        func_00CE2B30(2U);
        return;
    }
    func_00CE2B30(3U);
}
