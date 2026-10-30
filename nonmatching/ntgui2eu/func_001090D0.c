/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00113770(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_00113830(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0011587C(void *, u32);                 /* extern */

void func_001090D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_s0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    u32 temp_a0;
    void *temp_s1;

    temp_s1 = (arg1 * 0xE90) + arg2 + 0x470;
    func_0011587C(temp_s1, M2C_FIELD(temp_s1, u32 *, 0x44));
    temp_a0 = M2C_FIELD(temp_s1, u32 *, 0x44);
    temp_s2 = M2C_FIELD((arg0 + (arg1 * 0x18)), s32 *, 0x10);
    if (((u32) (temp_a0 - 4) < 2U) || (temp_a0 == 2) || (var_v0 = temp_a0 < 2U, (temp_a0 == 1))) {
        if (temp_s2 & 4) {
            M2C_FIELD(temp_s1, u8 *, 0x52) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x52) | 4);
            func_00113770(temp_s1, 0xB, 2);
        } else {
            M2C_FIELD(temp_s1, u8 *, 0x52) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x52) & 0xFB);
            func_00113830(temp_s1, 0xB, 2);
        }
        var_v0 = (u32) M2C_FIELD(temp_s1, u32 *, 0x44) < 2U;
    }
    if ((var_v0 == 0) && (M2C_FIELD(temp_s1, u32 *, 0x44) != 0x11) && (M2C_FIELD(temp_s1, u32 *, 0x44) != 4) && (M2C_FIELD(temp_s1, u32 *, 0x44) != 0xF) && (M2C_FIELD(temp_s1, u32 *, 0x44) != 0x10) && (M2C_FIELD(temp_s1, u32 *, 0x44) != 3)) {
        if (temp_s2 & 2) {
            M2C_FIELD(temp_s1, u8 *, 0x52) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x52) | 2);
            func_00113770(temp_s1, 1, 2);
        } else {
            M2C_FIELD(temp_s1, u8 *, 0x52) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x52) & 0xFD);
            func_00113830(temp_s1, 1, 2);
        }
    }
    func_00113830(temp_s1, 1, 4);
    func_00113830(temp_s1, 2, 4);
    func_00113830(temp_s1, 3, 4);
    func_00113830(temp_s1, 4, 4);
    func_00113830(temp_s1, 5, 4);
    func_00113830(temp_s1, 6, 4);
    func_00113830(temp_s1, 7, 4);
    func_00113830(temp_s1, 8, 4);
    func_00113830(temp_s1, 9, 4);
    func_00113830(temp_s1, 0xA, 4);
    func_00113830(temp_s1, 0xB, 4);
    func_00113830(temp_s1, 0xC, 4);
    func_00113830(temp_s1, 0xD, 4);
    var_s0 = M2C_FIELD((arg0 + (arg1 * 0x18)), s32 **, 0x14);
    if (var_s0 != NULL) {
        var_a1 = *var_s0;
        if (var_a1 != 0) {
            do {
                var_s0 += 4;
                func_00113770(temp_s1, var_a1, 4);
                temp_v1 = *var_s0;
                var_a1 = temp_v1;
            } while (temp_v1 != 0);
        }
    }
}
