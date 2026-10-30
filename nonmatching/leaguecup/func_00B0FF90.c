/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B0CD50(void);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C470(s32);                             /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, s32, s32);               /* extern */
M2C_UNK func_00973C70(void *, s32);                 /* extern */
s32 func_00B0C7B0(s32);                             /* extern */
extern char D_00B32930[];

void func_00B0FF90(void) {
    s32 *var_s1;
    s32 temp_s4;
    s32 temp_s6;
    s32 var_s5;
    s32 var_v1;
    u32 temp_v0;
    u32 var_s0;
    u32 var_s2;
    u8 temp_a0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xE05);
        switch (temp_a0) {                          /* irregular */
        case 10:
            var_v1 = 3;
            break;
        case 6:
            var_v1 = 2;
            break;
        case 8:
            var_v1 = 1;
            break;
        default:
            var_v1 = 0;
            break;
        }
        var_s5 = 0;
        if ((s32) temp_a0 > 0) {
            var_s2 = temp_v0;
            var_s0 = temp_v0;
            var_s1 = ((void *)D_00B32930) + (var_v1 << 7);
            do {
                temp_s4 = func_00B0C7B0(var_s5 & 0xFF) & 0xFFFF;
                if (temp_s4 == 0xFFFF) {
                    func_00956A80(M2C_FIELD(var_s2, s32 *, 0xE18), 0);
                    func_009737C0(M2C_FIELD(var_s2, s32 *, 0xEAC), 0);
                } else {
                    func_00956A80(M2C_FIELD(var_s2, s32 *, 0xE18), 1);
                    func_00956A90(M2C_FIELD(var_s2, s32 *, 0xE18), 1, temp_s4, 0);
                    temp_s6 = func_0095C470(temp_s4);
                    func_009737C0(M2C_FIELD(var_s2, s32 *, 0xEAC), 1);
                    func_009737E0(M2C_FIELD(var_s2, s32 *, 0xEAC), *var_s1 + 9, temp_s6);
                }
                if (M2C_FIELD(temp_v0, u16 *, 0x13C0) == temp_s4) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0xEA4), 1);
                    func_00973C70(M2C_FIELD(temp_v0, void **, 0xEA4), var_s0 + 0xF2C);
                }
                var_s5 += 1;
                var_s2 += 4;
                var_s1 += 4;
                var_s0 += 0x10;
            } while (var_s5 < (s32) M2C_FIELD(temp_v0, u8 *, 0xE05));
        }
    }
}
