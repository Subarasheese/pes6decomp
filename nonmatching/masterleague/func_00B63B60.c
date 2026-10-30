/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void func_001EEE60(void *, void *);
extern u32 func_00B62380(void);
s32 func_00225680(s32);                             /* extern */
s32 func_00229010(s32);                             /* extern */
M2C_UNK func_00956D80(void *, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_00B611F0(u8);                              /* extern */
s32 func_00B61240(u8);                              /* extern */
M2C_UNK func_00B62DB0();                            /* extern */

void func_00B63B60(void) {
    s8 sp8C;
    s8 sp8D;
    s8 sp8E;
    s8 sp8F;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s6;
    s32 var_s3;
    s32 var_v0;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s4;
    void *temp_v0_3;

    temp_v0 = func_00B62380();
    var_s4 = temp_v0;
    if (temp_v0 != 0) {
        temp_s2 = func_00B61240(M2C_FIELD(var_s4, u8 *, 0x4C0));
        temp_s6 = func_00B611F0(M2C_FIELD(var_s4, u8 *, 0x4C0));
        var_s3 = 0;
        do {
            if (var_s3 >= temp_s6) {
                func_001EF900(M2C_FIELD(var_s4, void **, 0x58), 0);
            } else {
                temp_v0_2 = func_00B62380();
                if (temp_v0_2 == 0) {
                    var_v0 = 0;
                } else {
                    temp_s0 = var_s3 + temp_s2;
                    temp_s5 = func_00225680(func_00229010(temp_s0 & 0xFF)) & 0xFFFF;
                    if (temp_s5 == 0xFFFF) {
                        var_v0 = 0;
                    } else {
                        temp_v0_3 = temp_v0_2 + (((temp_s0 & 0xFF) - func_00B61240(M2C_FIELD(temp_v0_2, u8 *, 0x4C0))) * 4);
                        func_00956D80(M2C_FIELD(temp_v0_3, void **, 0x58), 4, temp_s5 & 0xFFFF, 0);
                        func_001EF900(M2C_FIELD(temp_v0_3, void **, 0x58), 1);
                        if ((s32) M2C_FIELD((temp_v0_2 + (func_00229010(temp_s0 & 0xFF) & 0xFF)), u8 *, 0x4C5) <= 0) {
                            sp8F = 0xFF;
                            sp8C = 0x80;
                            sp8D = 0x80;
                            sp8E = 0x80;
                        } else {
                            sp8C = 0xFF;
                            sp8D = 0xFF;
                            sp8E = 0xFF;
                            sp8F = 0xFF;
                        }
                        func_001EEE60(M2C_FIELD(temp_v0_3, void **, 0x58), &sp8C);
                        var_v0 = 1;
                    }
                }
                if (var_v0 == 0) {
                    func_001EF900(M2C_FIELD(var_s4, void **, 0x58), 0);
                } else {
                    func_001EF900(M2C_FIELD(var_s4, void **, 0x58), 1);
                }
            }
            var_s3 += 1;
            var_s4 += 4;
        } while (var_s3 < 0x10);
        func_00B62DB0();
    }
}
