/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003395B0(void *);
extern s32 func_00340C80(f32);
extern int func_003387D0(void *, int);
extern M2C_UNK func_00355090;

s32 func_00355010(void *arg0) {
    s32 temp_s0;

    temp_s0 = func_003395B0(M2C_FIELD(arg0, void **, 0x3C)) - M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_s0 < func_00340C80(20.0f)) {
        return 0;
    }
    func_003387D0(arg0, (s32) &func_00355090);
    return 1;
}
