/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern u32 func_00B035D0(void);
M2C_UNK func_00971B80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00AFAF60();                            /* extern */
M2C_UNK func_00AFBC20();                            /* extern */

void func_00AFBB00(s8 arg0) {
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2_2;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29EA4), arg0);
        M2C_FIELD(temp_v0, s8 *, 0x29F84) = arg0;
        if (!(arg0 & 0xFF)) {
            func_00AFAF60();
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x29EA8), 0);
            func_00971B80(M2C_FIELD(temp_v0, s32 *, 0x29EA8), 2, 0);
            return;
        }
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            func_001D7D60(M2C_FIELD(var_s1, void **, 0x1EC), 0);
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0x17);
        var_s1_2 = 0;
        var_s2_2 = temp_v0;
        do {
            func_001D7D80(M2C_FIELD(var_s2_2, void **, 0x124), 0xC);
            var_s1_2 += 1;
            var_s2_2 += 4;
        } while (var_s1_2 < 0x17);
        func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x29EA8), 1);
        func_00971B80(M2C_FIELD(temp_v0, s32 *, 0x29EA8), 2, 0);
        func_00AFBC20();
    }
}
