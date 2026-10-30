/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002EC3D0(void *, s32, s32);
extern u32 func_00B447A0(void);
M2C_UNK func_002EC980(void *, M2C_UNK, u16);        /* extern */
M2C_UNK func_00972020(s32, s32);                    /* extern */
M2C_UNK func_00972040(s32, s32, s32);               /* extern */

void func_00B3E210(s32 arg0) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_s1;
    s32 var_s2_2;
    u32 temp_v0;
    u32 var_s1_2;
    u32 var_s2;
    u8 temp_s2;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        temp_a1 = M2C_FIELD(temp_v0, s32 *, 0x614);
        if (temp_a1 != 0) {
            if ((arg0 & 0xFF) != 1) {
                func_00972020(M2C_FIELD(temp_v0, s32 *, 0x5E8), arg0);
                func_00972020(M2C_FIELD(temp_v0, s32 *, 0x5EC), arg0);
                func_002EC3D0(M2C_FIELD(temp_v0, void **, 0x14), 1, 0);
            } else {
                switch (temp_a1) {                  /* irregular */
                case 3:
                    M2C_FIELD(temp_v0, s8 *, 0x5F0) = 1;
                    temp_s1 = (M2C_FIELD(temp_v0, u8 *, 0x61C) - 0x10) & 0xFF;
                    func_00972020(M2C_FIELD(temp_v0, s32 *, 0x5E8), 0);
                    func_00972020(M2C_FIELD(temp_v0, s32 *, 0x5EC), 1);
                    func_00972040(M2C_FIELD(temp_v0, s32 *, 0x5EC), temp_s1 & 0xFF, 0);
                    return;
                case 2:
                    temp_s2 = M2C_FIELD(temp_v0, u8 *, 0x61C);
                    M2C_FIELD(temp_v0, s8 *, 0x5F0) = 0;
                    temp_s1_2 = ((s32) temp_s2 % 8) & 0xFF;
                    func_00972020(M2C_FIELD(temp_v0, s32 *, 0x5E8), 1);
                    func_00972020(M2C_FIELD(temp_v0, s32 *, 0x5EC), 0);
                    func_00972040(M2C_FIELD(temp_v0, s32 *, 0x5E8), temp_s1_2 & 0xFF, ((u32) (temp_s2 & 0xFF) >> 3) & 0xFF);
                    return;
                case 1:
                    var_s1 = 0;
                    var_s2 = temp_v0;
                    do {
                        func_00972020(M2C_FIELD(var_s2, s32 *, 0x5E8), 0);
                        var_s1 += 1;
                        var_s2 += 4;
                    } while (var_s1 < 2);
                    func_002EC980(M2C_FIELD(temp_v0, void **, 0x14), 1, M2C_FIELD(temp_v0, u16 *, 0x618));
                    func_002EC3D0(M2C_FIELD(temp_v0, void **, 0x14), 1, 1);
                    return;
                }
            }
        } else {
            var_s2_2 = 0;
            var_s1_2 = temp_v0;
            do {
                func_00972020(M2C_FIELD(var_s1_2, s32 *, 0x5E8), 0);
                var_s2_2 += 1;
                var_s1_2 += 4;
            } while (var_s2_2 < 2);
            func_002EC3D0(M2C_FIELD(temp_v0, void **, 0x14), 1, 0);
        }
    }
}
