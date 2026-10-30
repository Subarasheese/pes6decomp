/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E44E0(void *);
void *func_002E45B0();                              /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void *func_008B9C80(f32 fparg0) {
    void *temp_v0;

    temp_v0 = func_002E45B0();
    func_002E44E0(temp_v0);
    return temp_v0;
}
