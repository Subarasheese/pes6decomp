/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001F3D80(s32, f32 *, M2C_UNK);         /* extern */

void func_002E5150(void *arg0, void *arg1) {
    f32 sp10;
    f32 sp14;
    s32 sp18;
    s32 sp1C;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        sp10 = M2C_FIELD(arg1, f32 *, 0);
        sp14 = M2C_FIELD(arg1, f32 *, 4);
        sp18 = 0;
        sp1C = 0;
        func_001F3D80(M2C_FIELD(arg0, s32 *, 0x18), &sp10, 0);
    }
}
