/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CAD70(void *, s64, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008CB5D0(M2C_UNK);                     /* extern */
M2C_UNK func_008D03C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008D0870(void *, s64);                 /* extern */
M2C_UNK func_008D0A90(s32);                         /* extern */

void func_008CD2A0(void *arg0, s32 arg1) {
    M2C_UNK (*temp_v0_2)(s32, u8);
    s32 temp_v0;
    s64 temp_s1;
    s8 var_a1;

    func_008CB5D0(0);
    func_008D03C0(arg0 + 0x480, 6);
    func_008D0A90(arg0 + 0x480);
    M2C_FIELD(arg0, s8 *, 4) = 0;
    var_a1 = 0;
    do {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x474);
        if (M2C_FIELD((temp_v0 + var_a1), u8 *, 1) == M2C_FIELD(((arg1 & 0xFF) + temp_v0), u8 *, 0x339)) {
            M2C_FIELD(arg0, s8 *, 4) = var_a1;
        }
        var_a1 += 1;
    } while (var_a1 < 0xB);
    temp_v0_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, u8), 0x108);
    if (temp_v0_2 != NULL) {
        temp_v0_2(M2C_FIELD(arg0, s32 *, 0x10C), (u8) M2C_FIELD(arg0, s8 *, 4));
    }
    temp_s1 = (s64) ((s64) (u8) M2C_FIELD(arg0, s8 *, 4) << 0x30) >> 0x30;
    func_008D0870(arg0 + 0x480, temp_s1);
    func_008CAD70(arg0, temp_s1, 1, 0);
}
