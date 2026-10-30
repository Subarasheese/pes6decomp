/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D7A20(s32, f32 *, M2C_UNK);         /* extern */
M2C_UNK func_001F3D80(s32, f32 *, M2C_UNK);         /* extern */
M2C_UNK func_008B9B00(s32, s32, s32);               /* extern */
M2C_UNK func_008C1430(s32, f32, f32);               /* extern */
M2C_UNK func_008C5BF0(s32, s32, s32);               /* extern */

void func_008D2EF0(void *arg0, void *arg1) {
    f32 sp40;
    f32 sp44;
    f32 sp50;
    f32 temp_f1;
    u8 temp_s0;

    func_008C5BF0(arg0 + 0xB8, (s32) M2C_FIELD(arg1, f32 *, 0), (s32) M2C_FIELD(arg1, f32 *, 4));
    func_008C1430(M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4));
    func_001D7A20(M2C_FIELD(arg0, s32 *, 0x48), &sp50, 0x14);
    func_001F3D80(M2C_FIELD(arg0, s32 *, 0x14), &sp50, 0);
    temp_s0 = M2C_FIELD(arg0, u8 *, 1);
    func_001D7A20(M2C_FIELD(arg0, s32 *, 0x54), &sp40, 0x55);
    temp_f1 = sp44 + (f32) (temp_s0 * M2C_FIELD(arg0, u8 *, 0xD));
    sp44 = temp_f1;
    func_008B9B00(M2C_FIELD(arg0, s32 *, 0xB4), (s32) sp40, (s32) temp_f1);
    func_008C1430(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4));
}
