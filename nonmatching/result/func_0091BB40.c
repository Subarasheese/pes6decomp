/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00910040(s32, M2C_UNK);                /* extern */
M2C_UNK func_00C74CC0(s32, M2C_UNK, f32);           /* extern */
extern void *D_00923FCC;

s32 func_0091BB40(void) {
    if (M2C_FIELD(D_00923FCC, s32 *, 8) < (M2C_FIELD(D_00923FCC, s32 *, 0x10) - 0xE)) {
        func_0026E840(0x8400F802);
        M2C_FIELD(D_00923FCC, s32 *, 8) = (s32) (M2C_FIELD(D_00923FCC, s32 *, 8) + 1);
        func_00C74CC0(M2C_FIELD(D_00923FCC, s32 *, 0x24), 0, (f32) (-M2C_FIELD(D_00923FCC, s32 *, 8) * M2C_FIELD(D_00923FCC, s32 *, 0x2C8)));
        func_00910040(M2C_FIELD(D_00923FCC, s32 *, 8), 0);
    }
    return 0;
}
