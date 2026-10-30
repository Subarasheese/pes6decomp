/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EE580(f32 *);                       /* extern */
M2C_UNK func_001EF5B0(s32, f32 *);                  /* extern */

void func_0026CD50(s32 arg0) {
    f32 sp20;
    f32 sp30;
    f32 sp50;
    f32 temp_f0;

    func_001EE580(&sp20);
    if (!((sp30 - sp20) <= 100.0f)) {
        temp_f0 = 100.0f + sp20;
        sp50 = temp_f0;
        sp30 = temp_f0;
        func_001EF5B0(arg0, &sp20);
    }
}
