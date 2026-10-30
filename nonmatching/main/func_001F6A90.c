/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DC900(void *);
extern s32 func_001E6C50(void *);
M2C_UNK func_001DCB40(s32);                         /* extern */
s32 func_001DCB80();                                /* extern */
void *func_001E7FE0(s32, s32, u16, u16 *, s32, s32); /* extern */

void func_001F6A90(void *arg0, s32 arg1, s32 arg2) {
    u16 sp6C;
    u16 sp6E;
    s16 var_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    u16 temp_v1;
    u16 temp_v1_2;
    u8 temp_a0;
    void *temp_s4;

    if (arg0 != NULL) {
        temp_s0 = arg1 & 0xFF;
        if (temp_s0 <= 0) {
            return;
        }
        temp_s1 = func_001DC900(arg0);
        temp_s2 = func_001DCB80();
        sp6C = M2C_FIELD(arg0, u16 *, 0x14);
        sp6E = M2C_FIELD(arg0, u16 *, 0x16);
        temp_s4 = func_001E7FE0(temp_s1, arg1, M2C_FIELD(arg0, u16 *, 0x16), &sp6C, temp_s2, arg2);
        func_001DCB40(M2C_FIELD(arg0, s32 *, 4));
        func_001E6C50((void *) temp_s1);
        M2C_FIELD(arg0, s32 *, 4) = temp_s2;
        var_a1 = 2;
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_s4, s32 *, 8);
        M2C_FIELD(arg0, void **, 0xC) = temp_s4;
        temp_a0 = M2C_FIELD(arg0, u8 *, 0);
        switch (temp_a0) {                          /* irregular */
        case 1:
            M2C_FIELD(arg0, u16 *, 0x10) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) + (((s32) (temp_s0 + 1) >> 1) & 0xFFFF));
            M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) * 2);
            temp_v1 = M2C_FIELD(arg0, u16 *, 0x10);
            if ((s32) temp_v1 >= 0) {
loop_7:
                if (var_a1 < (s32) temp_v1) {
                    var_a1 *= 2;
                    goto loop_7;
                }
            } else {
                var_a1 = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x18) = var_a1;
            break;
        case 2:
            M2C_FIELD(arg0, u16 *, 0x10) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) + temp_s0);
            M2C_FIELD(arg0, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x10);
            if ((s32) temp_v1_2 >= 0) {
loop_11:
                if (var_a1 < (s32) temp_v1_2) {
                    var_a1 *= 2;
                    goto loop_11;
                }
            } else {
                var_a1 = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x18) = var_a1;
            break;
        }
    }
}
