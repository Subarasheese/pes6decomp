/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001F2530(s32, M2C_UNK, f32 *);         /* extern */
M2C_UNK func_001F2770(s32, f32);                    /* extern */
M2C_UNK func_001F3D80(s32, M2C_UNK);                /* extern */

void func_002DB600(void *arg0, void *arg1) {
    f32 sp38;
    f32 sp3C;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        if (M2C_FIELD(arg0, s16 *, 2) < M2C_FIELD(arg0, s16 *, 0)) {
            func_001F3D80(M2C_FIELD(arg0, s32 *, 0x3C), 0);
            sp38 = M2C_FIELD(arg1, f32 *, 8);
            sp3C = M2C_FIELD(arg1, f32 *, 0xC);
            func_001F2530(M2C_FIELD(arg0, s32 *, 0x3C), 0, &sp38);
            if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
                sp3C *= (f32) M2C_FIELD(arg0, s16 *, 2) / (f32) M2C_FIELD(arg0, s16 *, 0);
            } else {
                sp38 *= (f32) M2C_FIELD(arg0, s16 *, 2) / (f32) M2C_FIELD(arg0, s16 *, 0);
            }
            func_001F2530(M2C_FIELD(arg0, s32 *, 0x3C), 1, &sp38);
            func_001F2770(M2C_FIELD(arg0, s32 *, 0x3C), (M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0x20)) / (M2C_FIELD(arg0, f32 *, 8) * (f32) (M2C_FIELD(arg0, s16 *, 0) - M2C_FIELD(arg0, s16 *, 2))));
        }
    }
}
