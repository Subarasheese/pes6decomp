/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001F2530(s32, M2C_UNK, f32 *);         /* extern */
M2C_UNK func_001F26F0(s32, u8 *);                   /* extern */
M2C_UNK func_001F2770(s32, M2C_UNK);                /* extern */
M2C_UNK func_001F27D0(s32, s32);                    /* extern */
s32 func_001F2880(s32);                             /* extern */
M2C_UNK func_001F3C80(s32, M2C_UNK);                /* extern */
M2C_UNK func_001F3D10(s32, M2C_UNK);                /* extern */
M2C_UNK func_001F3D80(s32, void *, M2C_UNK);        /* extern */
extern u8 D_003E7B34;
extern u8 D_003E7B35;
extern u8 D_003E7B36;
extern u8 D_003E7B37;
extern s32 D_003EA96C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
s32 func_0097FA20(s32 arg0, void *arg1, f32 fparg0) {
    f32 sp50;
    f32 sp54;
    u8 sp5C;
    u8 sp5D;
    u8 sp5E;
    u8 sp5F;
    s32 temp_v0;

    sp5C = D_003E7B34;
    sp5E = D_003E7B36;
    sp5D = D_003E7B35;
    sp5F = D_003E7B37;
    if (D_003EA96C == 0) {
        return 0;
    }
    temp_v0 = func_001F2880(D_003EA96C);
    func_001F3D10(temp_v0, 1);
    func_001F3D80(temp_v0, arg1, 0);
    func_001F26F0(temp_v0, &sp5C);
    func_001F27D0(temp_v0, arg0);
    sp50 = M2C_FIELD(arg1, f32 *, 8);
    sp54 = M2C_FIELD(arg1, f32 *, 0xC);
    func_001F2530(temp_v0, 0, &sp50);
    if (arg0 & 0xFF) {
        sp50 = (sp50 - 8.0f) * fparg0;
    } else {
        sp54 = (sp54 - 8.0f) * fparg0;
    }
    func_001F2530(temp_v0, 1, &sp50);
    func_001F2770(temp_v0, 0);
    func_001F3C80(temp_v0, 0xC641C000);
    return temp_v0;
}
