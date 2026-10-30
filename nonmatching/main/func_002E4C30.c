/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3C80(void *, f32);
extern void func_002E5A20(int);
M2C_UNK func_001F3D80(void *, f32 *, M2C_UNK);      /* extern */

void func_002E4C30(void *arg0, void *arg1) {
    f32 sp50;
    f32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 var_s0;
    s32 var_s3;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        sp50 = M2C_FIELD(arg1, f32 *, 0);
        sp54 = M2C_FIELD(arg1, f32 *, 4);
        sp58 = 0;
        sp5C = 0;
        func_001F3D80(M2C_FIELD(arg0, void **, 0x18), &sp50, 0);
        func_001F3C80(M2C_FIELD(arg0, void **, 0x18), M2C_FIELD(arg1, f32 *, 8));
        var_s0 = 0;
        if (M2C_FIELD(arg0, s16 *, 0x1C) > 0) {
            var_s3 = 0;
            do {
                func_002E5A20(M2C_FIELD(arg0, s32 *, 0x20) + var_s3);
                var_s0 += 1;
                var_s3 += 0x50;
            } while (var_s0 < M2C_FIELD(arg0, s16 *, 0x1C));
        }
    }
}
