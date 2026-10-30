/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
extern void func_001EDA50(void *, void *);
extern void func_001EDA30(void *, s32);
extern void func_001EDAE0(void *, s8);
extern void func_001ED880(void *, f32);
extern void func_001EFB50(void *);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
s32 func_001F2440(void *arg0, void *arg1) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    s32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 temp_f20;
    f32 temp_f3;
    f32 temp_f4;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x48);
    if ((func_001E62C0() & 2) == 2) {
        func_001EDAE0(temp_s0, (s8) M2C_FIELD(arg0, u8 *, 2));
        func_001EDA30(temp_s0, M2C_FIELD(arg0, s32 *, 0x4C));
        temp_f20 = M2C_FIELD(arg1, f32 *, 8);
        func_001ED880(temp_s0, temp_f20);
        if (M2C_FIELD(arg0, u8 *, 1) & 1) {
            temp_f4 = M2C_FIELD(arg0, f32 *, 8);
            temp_f3 = M2C_FIELD(arg0, f32 *, 0xC);
            sp60 = temp_f4;
            sp50 = M2C_FIELD(arg1, f32 *, 0) + temp_f4;
            sp64 = temp_f3;
            sp68 = M2C_FIELD(arg0, f32 *, 0x10);
            sp6C = M2C_FIELD(arg0, f32 *, 0x14);
            sp5C = 0;
            sp54 = M2C_FIELD(arg1, f32 *, 4) + temp_f3;
            sp58 = temp_f20;
            func_001EDA50(temp_s0, &sp50);
        }
        func_001EFB50(temp_s0);
    }
    M2C_FIELD(arg0, u8 *, 1) = 0U;
    return M2C_FIELD(temp_s0, s32 *, 0x30);
}
