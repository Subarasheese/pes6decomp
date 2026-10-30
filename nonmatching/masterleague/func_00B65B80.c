/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern u32 func_00B64F60(void);
M2C_UNK func_009728F0(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_00B64E50(s32, s32);                    /* extern */

void func_00B65B80(s32 arg0) {
    s32 temp_s1;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s0_2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2;

    func_00225820();
    temp_v0 = func_00B64F60();
    if (temp_v0 != 0) {
        temp_s1 = Pes6Team_GetPlayerId(0x127, arg0 & 0xFF, 0) & 0xFFFF;
        if (temp_s1 != 0) {
            var_s0 = 0;
            do {
                func_00B64E50(temp_s1, var_s0 & 0xFF);
                var_s0 += 1;
            } while (var_s0 < 6);
        }
        var_s0_2 = 0;
        var_s2 = temp_v0;
        var_s1 = temp_v0;
        do {
            temp_s4 = temp_v0 + ((var_s0_2 + 1) * 8) + 0x638;
            func_009728F0(M2C_FIELD(var_s1, s32 *, 0x66C), var_s2 + 0x638, temp_s4, 2);
            func_009728F0(M2C_FIELD(var_s1, s32 *, 0x684), var_s2 + 0x638, temp_s4, 6);
            var_s0_2 += 1;
            var_s2 += 8;
            var_s1 += 4;
        } while (var_s0_2 < 5);
        func_009728F0(M2C_FIELD(temp_v0, s32 *, 0x680), temp_v0 + 0x660, temp_v0 + 0x638, 2);
        func_009728F0(M2C_FIELD(temp_v0, s32 *, 0x698), temp_v0 + 0x660, temp_v0 + 0x638, 4);
    }
}
