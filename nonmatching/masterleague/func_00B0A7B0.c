/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B15370(void);
M2C_UNK func_00956A80(s32, s32);                    /* extern */
M2C_UNK func_009737C0(s32, s32);                    /* extern */

void func_00B0A7B0(s32 arg0) {
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    u32 temp_v0;
    u32 var_s0;
    u32 var_s1;
    u32 var_s2;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        var_s3 = 1;
        switch (arg0) {                             /* irregular */
        case 1:
            var_s7 = 0;
block_10:
            var_s5 = 0;
            var_s2 = temp_v0;
            var_s1 = temp_v0;
            do {
                func_009737C0(M2C_FIELD(var_s2, s32 *, 0x658), var_s3 & 0xFF);
                func_009737C0(M2C_FIELD(var_s2, s32 *, 0x660), var_s3 & 0xFF);
                func_00956A80(M2C_FIELD(var_s2, s32 *, 0x668), var_s3 & 0xFF);
                func_00956A80(M2C_FIELD(var_s2, s32 *, 0x670), var_s3 & 0xFF);
                var_s4 = 0;
                var_s0 = var_s1;
loop_12:
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x678), var_s3 & 0xFF);
                var_s4 += 1;
                var_s0 += 4;
                if (var_s4 < 0x10) {
                    goto loop_12;
                }
                var_s5 += 1;
                var_s2 += 4;
                var_s1 += 0x40;
            } while (var_s5 < 2);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x600), var_s7 & 0xFF);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x604), var_s7 & 0xFF);
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0x608), var_s7 & 0xFF);
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0x60C), var_s7 & 0xFF);
            break;
        case 0:
            var_s7 = 1;
            var_s3 = 0;
            goto block_10;
        }
    }
}
