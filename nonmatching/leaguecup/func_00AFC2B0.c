/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D7860(void *);
extern u8 func_00225820(void);
extern void Pes6Sprite_SetPositionZ(void *, float);
extern u32 func_00B035D0(void);
M2C_UNK func_00973C70(void *, s32);                 /* extern */
void *func_00973CD0(s32, M2C_UNK);                  /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_00AFC2B0(void) {
    f32 temp_f20;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s0;
    u32 var_s1;
    void *temp_v0_2;
    void *temp_v0_3;

    func_00225820();
    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        var_s3 = 0;
        var_s1 = temp_v0;
        var_s0 = temp_v0;
        do {
            temp_v0_2 = func_00973CD0(M2C_FIELD(temp_v0, s32 *, 0xC), 0);
            M2C_FIELD(var_s1, void **, 0x1EC) = temp_v0_2;
            temp_f20 = func_001D7860(temp_v0_2);
            func_00973C70(M2C_FIELD(var_s1, void **, 0x1EC), var_s0 + 0x278);
            Pes6Sprite_SetPositionZ(M2C_FIELD(var_s1, void **, 0x1EC), M2C_FIELD(temp_v0, f32 *, 0x3E8) + temp_f20);
            var_s3 += 1;
            var_s1 += 4;
            var_s0 += 0x10;
        } while (var_s3 < 0x17);
        temp_v0_3 = func_00973CD0(M2C_FIELD(temp_v0, s32 *, 0xC), 0);
        M2C_FIELD(temp_v0, void **, 0x248) = temp_v0_3;
        func_00973C70(temp_v0_3, temp_v0 + 0x3EC);
        Pes6Sprite_SetPositionZ(M2C_FIELD(temp_v0, void **, 0x248), M2C_FIELD(temp_v0, f32 *, 0x3FC));
    }
}
