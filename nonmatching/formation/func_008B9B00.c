/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF050(f32 *);                       /* extern */
M2C_UNK func_002DF0A0(s32, f32 *);                  /* extern */

void func_008B9B00(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp40;
    f32 sp44;

    func_002DF050(&sp40);
    sp40 = (f32) arg1;
    sp44 = (f32) arg2;
    func_002DF0A0(arg0, &sp40);
}
