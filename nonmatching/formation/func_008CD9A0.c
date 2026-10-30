/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008CAA10();                            /* extern */
M2C_UNK func_008CAD70(void *, s64, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008D0870(void *, s64);                 /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */

s32 func_008CD9A0(void *arg0, s32 arg1) {
    M2C_UNK (*temp_v0_2)(s32, s32);
    s32 temp_v0;
    s32 temp_v1;
    s64 temp_s0;
    u8 temp_v1_2;
    u8 var_s0;
    u8 var_v1;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x474);
    func_008CAA10();
    temp_v1 = func_008D90A0(arg1) & 0x60;
    switch (temp_v1) {                              /* irregular */
    case 0x20:
        func_0026E840(0x84028400);
        return 2;
    case 0x40:
        func_0026E840(0x84008401);
        return 1;
    default:
        temp_v0 = func_008D9300(arg1);
        if ((temp_v0 != 2) && (temp_v0 != 1)) {
            return 0;
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 4);
        var_s0 = M2C_FIELD(temp_s1, u8 *, 0x339);
        if (M2C_FIELD((temp_v1_2 + temp_s1), u8 *, 1) == var_s0) {
            var_s0 = M2C_FIELD(temp_s1, u8 *, 0x33A);
        }
        temp_v0_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0x108);
        if (temp_v0_2 != NULL) {
            temp_v0_2(M2C_FIELD(arg0, s32 *, 0x10C), temp_v1_2 & 0xFF);
        }
        var_v1 = 0;
        do {
            if (M2C_FIELD((temp_s1 + var_v1), u8 *, 1) == var_s0) {
                M2C_FIELD(arg0, u8 *, 4) = var_v1;
            }
            var_v1 += 1;
        } while ((s32) var_v1 < 0xB);
        temp_s0 = (s64) ((s64) M2C_FIELD(arg0, u8 *, 4) << 0x30) >> 0x30;
        func_008D0870(arg0 + 0x480, temp_s0);
        func_008CAD70(arg0, temp_s0, 1, 0);
        func_0026E840(0x8400F802);
        return 3;
    }
}
