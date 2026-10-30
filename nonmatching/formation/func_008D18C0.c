/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
extern u32 func_008C5740(void *);
M2C_UNK func_001D7A20(u32, M2C_UNK32 *, M2C_UNK);   /* extern */
M2C_UNK func_008B9AB0(s32, M2C_UNK);                /* extern */
s32 func_008B9B70(s32, M2C_UNK32 *, M2C_UNK);       /* extern */
s32 func_008B9F90(s32, M2C_UNK32 *, f32);           /* extern */
u32 func_008C1490(M2C_UNK, M2C_UNK32 *);            /* extern */

void func_008D18C0(void *arg0, void *arg1) {
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    f32 sp38;
    M2C_UNK32 sp40;
    M2C_UNK32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 var_f0;
    s32 temp_s0;
    s32 temp_v0_3;
    u32 temp_v0;
    u32 temp_v0_2;

    if (M2C_FIELD(arg0, u32 *, 0x1E8) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1D8) == 0) {
            temp_v0 = func_008C5740(arg0 + 0x214);
            if (temp_v0 != 0) {
                if (M2C_FIELD(arg0, u8 *, 1) != 1) {
                    func_001D7A20(temp_v0, &sp40, 0x66);
                } else {
                    func_001D7A20(temp_v0, &sp40, 0x96);
                }
            }
            sp30 = sp40;
            sp34 = sp44;
            sp38 = M2C_FIELD(arg1, f32 *, 8);
            M2C_FIELD(arg0, u32 *, 0x1E8) = func_008C1490(0x23, &sp30);
            sp40 = 0;
            sp44 = 0;
            sp48 = 0;
            sp4C = 0;
            temp_v0_2 = func_008C5740(arg0 + 0x214);
            if (M2C_FIELD(arg0, u8 *, 1) != 1) {
                var_f0 = func_001D79A0((void *) temp_v0_2, 0x66U);
            } else {
                var_f0 = func_001D79A0((void *) temp_v0_2, 0x96U);
            }
            temp_s0 = func_008B9F90(M2C_FIELD(arg0, s32 *, 0x3C), &sp40, var_f0);
            func_001D7A20(M2C_FIELD(arg0, u32 *, 0x1E8), &sp40, 0xBE);
            temp_v0_3 = func_008B9B70(temp_s0, &sp40, 0);
            M2C_FIELD(arg0, s32 *, 0x1D8) = temp_v0_3;
            func_008B9AB0(temp_v0_3, 0);
        }
    }
}
