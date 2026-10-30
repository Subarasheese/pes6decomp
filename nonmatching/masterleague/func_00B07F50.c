/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B0A1E0(void);
extern u8 func_00226E70(void);
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */

void func_00B07F50(s32 arg0) {
    s32 var_s1;
    s32 var_s2_2;
    u32 temp_v0;
    u32 var_s1_2;
    u32 var_s2;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        switch (arg0) {                             /* irregular */
        case 2:
            var_s1 = 0;
            var_s2 = temp_v0;
            do {
                func_009737C0(M2C_FIELD(var_s2, s32 *, 0x598), 0);
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x698), 1);
                var_s1 += 1;
                var_s2 += 4;
            } while (var_s1 < 0x20);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x7A4), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x7B0), 1);
            break;
        case 0:
            var_s2_2 = 0;
            var_s1_2 = temp_v0;
            do {
                func_009737C0(M2C_FIELD(var_s1_2, s32 *, 0x598), 1);
                func_001D7D60(M2C_FIELD(var_s1_2, void **, 0x698), 0);
                var_s2_2 += 1;
                var_s1_2 += 4;
            } while (var_s2_2 < 0x20);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x7A4), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x7B0), 0);
            if (func_00226E70() != 0) {
                func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x6C), 1);
                return;
            }
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x6C), 0);
            return;
        }
    }
}
