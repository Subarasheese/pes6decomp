/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A8B80(f32);
M2C_UNK func_002A8940(f32);                         /* extern */
extern char D_005E2674[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_002AA090(f32 fparg0, f32 fparg1) {
    f32 var_f0;
    f32 var_f20;

    var_f0 = 30000.0f;
    if (!(fparg0 <= 30000.0f)) {

    } else {
        var_f0 = 200.0f;
        if (!(fparg0 < 200.0f)) {
            var_f0 = fparg0;
        }
    }
    var_f20 = 1.0f;
    if (!(fparg1 <= 1.0f)) {
        var_f20 = fparg1;
    }
    (*(s32 *)D_005E2674) = 1;
    func_002A8940(var_f0);
    func_002A8B80(var_f20);
}
