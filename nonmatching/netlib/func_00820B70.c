/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F2770(void *, f32);
extern void func_001F3C40(void *, s8);
extern void func_001F3C80(void *, f32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001F2530(void *, M2C_UNK, f32 *);      /* extern */
M2C_UNK func_001F3D80(void *, void *, M2C_UNK);     /* extern */

s32 func_00820B70(void *arg0) {
    f32 sp28;
    f32 sp2C;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
            func_001F3D80(M2C_FIELD(arg0, void **, 8), arg0 + 0xC, 0);
            sp28 = M2C_FIELD(arg0, f32 *, 0x14);
            sp2C = M2C_FIELD(arg0, f32 *, 0x18);
            func_001F2530(M2C_FIELD(arg0, void **, 8), 0, &sp28);
            sp28 = M2C_FIELD(arg0, f32 *, 0x14);
            sp2C = M2C_FIELD(arg0, f32 *, 0x1C) * (sp2C - 8.0f);
            func_001F2530(M2C_FIELD(arg0, void **, 8), 1, &sp28);
            func_001F2770(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, f32 *, 0x20));
            func_001F3C80(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, f32 *, 0x24));
            func_001F3C40(M2C_FIELD(arg0, void **, 0), (s8) M2C_FIELD(arg0, u8 *, 0x28));
            func_001F3C40(M2C_FIELD(arg0, void **, 4), (s8) M2C_FIELD(arg0, u8 *, 0x28));
            func_001F3C40(M2C_FIELD(arg0, void **, 8), (s8) M2C_FIELD(arg0, u8 *, 0x28));
            func_001F3D10((s32) M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, u8 *, 0x29));
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
        return 0;
    }
    return 1;
}
