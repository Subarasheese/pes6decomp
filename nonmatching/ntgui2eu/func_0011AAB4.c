/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011BFE0(s32, void *);                 /* extern */
M2C_UNK func_0011DE60(s32, f32);                    /* extern */
M2C_UNK func_00199120(void *);                      /* extern */
extern void *D_006024F0;

void func_0011AAB4(void) {
    f32 var_f20;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_006024F0, s32 *, 0x38);
    var_f20 = M2C_FIELD(D_006024F0, f32 *, 0x58);
    if (temp_v0 != 0) {
        var_f20 = (var_f20 * (f32) temp_v0) / 100.0f;
    }
    if (M2C_FIELD(D_006024F0, s32 *, 0x18) != 0) {
        M2C_FIELD(D_006024F0, s32 *, 0x18) = 0;
        func_00199120(D_006024F0 + 0x110);
        M2C_FIELD(D_006024F0, f32 *, 0x110) = var_f20;
        M2C_FIELD(D_006024F0, f32 *, 0x124) = (f32) (var_f20 * M2C_FIELD(D_006024F0, f32 *, 0x54));
        M2C_FIELD(D_006024F0, f32 *, 0x140) = (f32) ((f32) M2C_FIELD(D_006024F0, s32 *, 0x3C) * M2C_FIELD(D_006024F0, f32 *, 0x58));
        M2C_FIELD(D_006024F0, f32 *, 0x144) = (f32) ((f32) M2C_FIELD(D_006024F0, s32 *, 0x10) * M2C_FIELD(D_006024F0, f32 *, 0x58) * M2C_FIELD(D_006024F0, f32 *, 0x54));
    }
    func_0011DE60(M2C_FIELD(D_006024F0, s32 *, 4), (f32) M2C_FIELD(D_006024F0, s32 *, 0x3C) * var_f20);
    func_0011BFE0(M2C_FIELD(D_006024F0, s32 *, 4), D_006024F0 + 0x110);
}
