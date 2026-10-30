/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208750(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00208970(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B30B0(s32, s16);                        /* extern */
u16 func_009B3220(u16, u16, M2C_UNK);               /* extern */
M2C_UNK func_00AFB7C0(void *, s32, s32);            /* extern */

void func_0097CC00(void *arg0, u8 arg1, s16 arg2, s32 arg3) {
    u16 temp_v1;
    u16 temp_v1_2;
    u8 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    var_s1 = arg1;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    if ((temp_v1 != 0x117) && (temp_v1 != 0x393)) {
        M2C_FIELD(arg0, s16 *, 0x18) = 0x40;
        temp_a0_2 = M2C_FIELD(arg0, void **, 4);
        temp_v1_2 = M2C_FIELD(temp_a0_2, u16 *, 0x30);
        switch (temp_v1_2) {                        /* irregular */
        case 0xB6:
            if ((M2C_FIELD(temp_a0_2, u8 *, 0x2D) != var_s1) && ((func_009B30B0(arg3, arg2) & 0xFFFF) < 0x75)) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = var_s1;
                func_00207390(M2C_FIELD(arg0, void **, 4), 6);
                M2C_FIELD(arg0, s16 *, 0x18) = 1;
                M2C_FIELD(arg0, s16 *, 0x3A) = 0xFF;
            } else {
                func_00207BE0(M2C_FIELD(arg0, void **, 4));
                if ((M2C_FIELD(arg0, s32 *, 0x1C) < 0x1900) && ((0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) >= M2C_FIELD(arg0, s32 *, 0x90))) {
                    temp_a0_3 = M2C_FIELD(arg0, void **, 4);
                    func_00208970(temp_a0_3, 0xBF, M2C_FIELD(temp_a0_3, f32 *, 0x38));
                    M2C_FIELD(arg0, s16 *, 0x34) = arg2;
                    M2C_FIELD(arg0, s16 *, 0x18) = 0x17;
                }
            }
            break;
        case 0xBF:
            var_s1 = M2C_FIELD(temp_a0_2, u8 *, 0x2D);
            /* fallthrough */
        default:
            func_00208750(temp_a0_2, 0xB6, var_s1 & 0xFF);
            break;
        }
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(arg0, u16 *, 0x26), 0xE00);
        func_00AFB7C0(arg0, M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, u8 *, 0x5C) + 0x20);
        M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        return;
    }
    func_00209A00(temp_a0, 0x38D, 0);
    func_00207390(M2C_FIELD(arg0, void **, 4), 4);
    M2C_FIELD(arg0, s16 *, 0x18) = 0x1B;
}
