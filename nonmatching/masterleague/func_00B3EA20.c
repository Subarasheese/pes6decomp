/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B447A0(void);
extern void func_001D7D60(void *, s8);
extern s32 func_00B445F0(s32, s32);
M2C_UNK func_002EC8A0(s32, s32);                    /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C4A0(s16);                             /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00B3E940(s32);                         /* extern */
M2C_UNK func_00B3F070(s32, u8);                     /* extern */
s32 func_00B44740(s32);                             /* extern */

void func_00B3EA20(s32 arg0, s32 arg1) {
    s16 temp_s1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s2_2;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u8 temp_a1;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        switch (arg0) {                             /* irregular */
        case 7:
            temp_s0 = func_00B44740(arg1) & 0xFF;
            var_s2 = 0;
            do {
                if ((var_s2 < temp_s0) && ((func_00B445F0(arg1, var_s2 & 0xFF) & 0xFFFF) != 0xFFFF)) {
                    func_00B3E940(var_s2 & 0xFF);
                }
                var_s2 += 1;
            } while (var_s2 < 0x14);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x18), 1);
            return;
        case 5:
        case 0:
        case 6:
            func_002EC8A0(M2C_FIELD(temp_v0, s32 *, 0x14), (arg1 & 0xFF) + 8);
            temp_s0_2 = func_00B44740(arg1) & 0xFF;
            var_s2_2 = 0;
            do {
                if ((var_s2_2 < temp_s0_2) && ((func_00B445F0(arg1, var_s2_2 & 0xFF) & 0xFFFF) != 0xFFFF)) {
                    func_00B3E940(var_s2_2 & 0xFF);
                }
                var_s2_2 += 1;
            } while (var_s2_2 < 0x14);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x18), 1);
            if ((func_00B445F0((s32) M2C_FIELD(temp_v0, u8 *, 0x610), (s32) M2C_FIELD(temp_v0, u8 *, 0x60C)) & 0xFFFF) == 0xFFFF) {
loop_14:
                M2C_FIELD(temp_v0, u8 *, 0x60C) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x60C) - 1);
                temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x60C);
                temp_v0_2 = func_00B445F0((s32) M2C_FIELD(temp_v0, u8 *, 0x610), (s32) M2C_FIELD(temp_v0, u8 *, 0x60C)) & 0xFFFF;
                if ((s32) temp_a1 >= 0) {
                    if ((temp_v0_2 & 0xFFFF) != 0xFFFF) {

                    } else {
                        goto loop_14;
                    }
                }
                func_00B3F070(M2C_FIELD(temp_v0, s32 *, 0x6B4), temp_a1);
            }
            temp_s1 = func_00B445F0((s32) M2C_FIELD(temp_v0, u8 *, 0x610), (s32) M2C_FIELD(temp_v0, u8 *, 0x60C)) & 0xFFFF;
            temp_v0_3 = func_00B447A0();
            if (temp_v0_3 != 0) {
                temp_v0_4 = func_00B447A0();
                if (temp_v0_4 != 0) {
                    M2C_FIELD(temp_v0_4, s16 *, 8) = temp_s1;
                }
                temp_s2 = temp_s1 & 0xFFFF;
                if (temp_s2 != 0xFFFF) {
                    func_009737E0(M2C_FIELD(temp_v0_3, s32 *, 0x1C), 4, func_0095C4A0(temp_s1));
                    func_009737C0(M2C_FIELD(temp_v0_3, s32 *, 0x1C), 1);
                    func_00956A80(M2C_FIELD(temp_v0_3, s32 *, 0x20), 1);
                    func_00956A90(M2C_FIELD(temp_v0_3, s32 *, 0x20), 4, temp_s2, 0);
                    return;
                }
                func_009737C0(M2C_FIELD(temp_v0_3, s32 *, 0x1C), 0);
                func_00956A80(M2C_FIELD(temp_v0_3, s32 *, 0x20), 0);
                return;
            }
            break;
        default:
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x18), 0);
            break;
        }
    }
}
