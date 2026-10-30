/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF860(void *, void *);
void func_002E3800(void *arg0, void *arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 sp3C;
    void *temp_v1;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        func_001EF860(M2C_FIELD(arg0, void **, 4), arg1);
        temp_v1 = M2C_FIELD(arg0, void **, 0);
        sp30 = M2C_FIELD(arg1, f32 *, 0) + ((3.0f * M2C_FIELD(temp_v1, f32 *, 0x14)) / 64.0f);
        sp34 = M2C_FIELD(arg1, f32 *, 4) + ((3.0f * M2C_FIELD(temp_v1, f32 *, 0x18)) / 64.0f);
        sp38 = M2C_FIELD(arg1, f32 *, 8);
        sp3C = 0;
        func_001EF860(M2C_FIELD(arg0, void **, 8), &sp30);
    }
}
