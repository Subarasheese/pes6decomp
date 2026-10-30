/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern u32 func_008B2C50(void);
s32 func_008BA640(u32, s32, u8);                    /* extern */
M2C_UNK func_008E2820(void *, s32);                 /* extern */
M2C_UNK func_008E2850(void *, s8 *);                /* extern */
M2C_UNK func_008E2860(void *, s32, s32, s32);       /* extern */

s32 func_008C8310(void *arg0, s32 arg1, s32 arg2) {
    s8 sp7C;
    s8 sp7D;
    s8 sp7E;
    s8 sp7F;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a6;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a0;
    u8 temp_a3;
    u8 temp_a4;
    u8 temp_a5;
    void *var_a0_2;
    void *var_a2;

    var_s1 = 0;
    var_s0 = 0;
    temp_s4 = func_001F08B0(M2C_FIELD((((arg1 & 0xFF) * 8) + arg0), s32 *, 0x10));
    temp_v0 = func_008BA640(func_008B2C50(), temp_s4, M2C_FIELD(arg0, u8 *, 0xD));
    temp_a0 = M2C_FIELD(arg0, u8 *, 0xE);
    temp_a1 = arg2 & 0xFF;
    var_a3 = temp_a0 * (temp_a1 + 1);
    if (var_a3 >= temp_v0) {
        var_a3 = temp_v0;
        var_s1 = 1;
    }
    func_008E2860(arg0 + 0x140, temp_s4, temp_a0 * temp_a1, var_a3);
    sp7F = 0xFF;
    sp7C = 0;
    sp7D = 0;
    sp7E = 0;
    func_008E2850(arg0 + 0x140, &sp7C);
    temp_v1 = arg1 & 0xFF;
    var_a1 = 0;
    if (temp_v1 > 0) {
        if (temp_v1 >= 9) {
            var_a0 = 0;
            if ((temp_v1 >= 0) && (temp_v1 < 0x7FFFFFFF)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                var_a0_2 = arg0;
                do {
                    var_a1 += 8;
                    temp_a5 = M2C_FIELD(var_a0_2, u8 *, 0x3C);
                    temp_a4 = M2C_FIELD(var_a0_2, u8 *, 0x44);
                    temp_a3 = M2C_FIELD(var_a0_2, u8 *, 0x4C);
                    temp_a6 = ((((((((var_s0 + M2C_FIELD(var_a0_2, u8 *, 0x14)) & 0xFF) + M2C_FIELD(var_a0_2, u8 *, 0x1C)) & 0xFF) + M2C_FIELD(var_a0_2, u8 *, 0x24)) & 0xFF) + M2C_FIELD(var_a0_2, u8 *, 0x2C)) & 0xFF) + M2C_FIELD(var_a0_2, u8 *, 0x34);
                    var_a0_2 += 0x40;
                    var_s0 = ((((((temp_a6 & 0xFF) + temp_a5) & 0xFF) + temp_a4) & 0xFF) + temp_a3) & 0xFF;
                } while (var_a1 < (temp_v1 - 8));
            }
        }
        if (var_a1 < temp_v1) {
            var_a2 = arg0 + (var_a1 * 8);
            do {
                var_a1 += 1;
                temp_a0_2 = var_s0 + M2C_FIELD(var_a2, u8 *, 0x14);
                var_a2 += 8;
                var_s0 = temp_a0_2 & 0xFF;
            } while (var_a1 < temp_v1);
        }
    }
    func_008E2820(arg0 + 0x140, (var_s0 + arg2) & 0xFF);
    return var_s1;
}
