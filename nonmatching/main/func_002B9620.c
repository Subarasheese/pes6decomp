/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_002A9590(void);
extern float func_002A95A0(void);
M2C_UNK func_002A6B20();                            /* extern */
extern char D_005E2F60[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_002B9620(void) {
    f32 temp_f20;

    func_002A6B20();
    temp_f20 = func_002A9590();
    if (!(temp_f20 < func_002A95A0())) {
        (*(s32 *)D_005E2F60) = 0;
    }
}
