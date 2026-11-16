/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern f32 D_0052B0B4;
extern f32 D_0052B0B8;
extern f32 D_0052B0C0;

void func_001E5C50(void *arg0, void *arg1) {
    s16 sp[2];
    s64 v;
    u16 t;

    sp[0] = (s16) (s32) D_0052B0B4;
    sp[1] = (s16) (s32) D_0052B0B8;
    v = ((s64) (s32) (M2C_FIELD(arg1, s16 *, 6) + sp[1]) << 48)
      | ((s64) (s32) (M2C_FIELD(arg1, s16 *, 2) + sp[1]) << 32)
      | ((s64) (s32) (M2C_FIELD(arg1, s16 *, 4) + sp[0]) << 16)
      | (s64) (s32) (M2C_FIELD(arg1, s16 *, 0) + sp[0]);
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s64 *, 0x28) = v;
        if (D_0052B0C0 != 1.0f) {
            t = M2C_FIELD(arg0, u16 *, 0x2C);
            M2C_FIELD(arg0, u16 *, 0x2C) = (t & 0xF800) | (((s16) (s32) ((f32) (t & 0x7FF) * D_0052B0C0)) & 0x7FF);
            t = M2C_FIELD(arg0, u16 *, 0x2E);
            M2C_FIELD(arg0, u16 *, 0x2E) = (t & 0xF800) | (((s16) (s32) ((f32) (t & 0x7FF) * D_0052B0C0)) & 0x7FF);
        }
        M2C_FIELD(arg0, u8 *, 0x3C) |= 0x20;
    }
}
