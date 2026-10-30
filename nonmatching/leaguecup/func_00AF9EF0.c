/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern u32 func_00B035D0(void);
s32 func_00B013F0(s32, s32);                        /* extern */
s32 func_00B01540(s32);                             /* extern */

void func_00AF9EF0(s32 arg0) {
    s32 temp_s1;
    s32 var_s4;
    u32 temp_v0;
    u32 var_s2;
    u8 temp_s0;
    u8 temp_v1;
    void *temp_a0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        var_s4 = 0;
        var_s2 = temp_v0;
        do {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5D0);
            if (((var_s4 + 1) < (s32) temp_v1) || ((temp_v1 + 0xB) < var_s4)) {
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x10), 0);
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 0);
            } else if (var_s4 >= func_00B01540(arg0)) {
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x10), 0);
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 0);
            } else {
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x10), 1);
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 1);
                temp_a0 = temp_v0 + ((func_00B013F0(arg0, var_s4 & 0xFF) & 0xFFFF) * 0x1C);
                temp_s1 = M2C_FIELD(temp_a0, s32 *, 0xA10);
                temp_s0 = M2C_FIELD(temp_a0, u8 *, 0xA14);
                if (temp_s1 != -1) {
                    func_001D7D80(M2C_FIELD(var_s2, void **, 0x124), (s16) ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
                    func_001D7D60(M2C_FIELD(var_s2, void **, 0x124), 1);
                    if ((temp_s1 % 3) == 0) {
                        func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 1);
                    } else {
                        func_001D7D60(M2C_FIELD(var_s2, void **, 0x1EC), 0);
                    }
                    func_001D7D80(M2C_FIELD(var_s2, void **, 0x1EC), (s16) ((s64) ((s64) temp_s0 << 0x30) >> 0x30));
                }
            }
            var_s4 += 1;
            var_s2 += 4;
        } while (var_s4 < 0x17);
    }
}
