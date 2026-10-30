/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D77B0(s32, f32 *);                  /* extern */

s32 func_00363CC0(void **arg0) {
    f32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = *arg0;
    temp_v0 = M2C_FIELD(temp_v1, s32 *, 0x14);
    if (temp_v0 <= 0) {
        sp10 = 0.0f;
        sp14 = 0x3F800000;
        sp18 = 0x3F800000;
        sp1C = 0x3F800000;
    } else {
        sp14 = 0x3F800000;
        sp18 = 0x3F800000;
        sp1C = 0x3F800000;
        sp10 = (f32) temp_v0 / (f32) M2C_FIELD(temp_v1, s32 *, 0);
    }
    func_001D77B0(M2C_FIELD(temp_v1, s32 *, 0x24), &sp10);
    return 0;
}
