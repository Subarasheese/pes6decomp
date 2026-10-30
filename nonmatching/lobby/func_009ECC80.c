/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002DF640(void *, f32, f32);
M2C_UNK func_002DF050(void *, f32 *);               /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_009ECC80(void *arg0, f32 fparg0) {
    f32 sp30;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x2C);
    func_002DF050(temp_s0, &sp30);
    func_002DF640(temp_s0, sp30, fparg0);
}
