/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CAD70(void *, s64, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008D0150(void *, s32);                 /* extern */
M2C_UNK func_008D0650(void *, u8, u8);              /* extern */
M2C_UNK func_008D0820(void *);                      /* extern */
M2C_UNK func_008D0870(void *, s64);                 /* extern */

void func_008CCF80(void *arg0) {
    M2C_UNK (*temp_v0)(s32, u8);
    s32 temp_s0;
    s64 temp_s0_2;
    s8 var_a1;
    u8 var_s2;

    if (arg0 != NULL) {
        var_s2 = M2C_FIELD(arg0, u8 *, 3);
        if ((s32) var_s2 >= 5) {
            var_s2 = 4;
        }
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x474);
        func_008D0820(arg0 + 0x480);
        if (temp_s0 != 0) {
            var_a1 = 0;
            do {
                if (M2C_FIELD((temp_s0 + var_a1), u8 *, 1) == M2C_FIELD((temp_s0 + (var_s2 & 0xFF)), u8 *, 0x334)) {
                    M2C_FIELD(arg0, s8 *, 4) = var_a1;
                }
                var_a1 += 1;
            } while (var_a1 < 0x20);
        }
        func_008D0650(arg0 + 0x480, M2C_FIELD(arg0, u8 *, 3), (u8) M2C_FIELD(arg0, s8 *, 4));
        temp_s0_2 = (s64) ((s64) (u8) M2C_FIELD(arg0, s8 *, 4) << 0x30) >> 0x30;
        func_008D0870(arg0 + 0x480, temp_s0_2);
        func_008CAD70(arg0, temp_s0_2, 1, 0);
        temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, u8), 0x108);
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(arg0, s32 *, 0x10C), (u8) M2C_FIELD(arg0, s8 *, 4));
        }
        func_008D0150(arg0 + 0x480, ((u8) M2C_FIELD(arg0, u8 *, 3) >> 1) & 0xFF);
    }
}
