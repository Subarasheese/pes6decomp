/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00A87E80(void *);                      /* extern */
s32 func_00BBB990(u16, s32);                        /* extern */
s32 func_00BBB9C0(u16, s32);                        /* extern */
M2C_UNK func_00BF1590();                            /* extern */

void func_00BF14F0(void *arg0) {
    u8 temp_v1;

    func_00BF1590();
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x48);
    if ((temp_v1 != 0xFF) && (temp_v1 != 0)) {
        func_00A87E80(arg0);
    } else {
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(arg0, u16 *, 0x228), M2C_FIELD(arg0, s32 *, 0x224)));
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(arg0, u16 *, 0x228), M2C_FIELD(arg0, s32 *, 0x224)));
    }
}
