/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEFF50(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_00973C70(void *, s32);                 /* extern */
s32 func_00AEEEB0(s32);                             /* extern */

void func_00AF29C0(void) {
    s32 temp_s0;
    s32 var_s4;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2;

    temp_v0 = func_00AEFF50();
    if (temp_v0 != 0) {
        var_s4 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x21CC) > 0) {
            var_s2 = temp_v0;
            var_s1 = temp_v0;
            do {
                temp_s0 = func_00AEEEB0(var_s4 & 0xFF) & 0xFFFF;
                if (temp_s0 == 0xFFFF) {
                    func_00956A80(M2C_FIELD(var_s2, s32 *, 0x1BF0), 0);
                } else {
                    func_00956A80(M2C_FIELD(var_s2, s32 *, 0x1BF0), 1);
                    func_00956A90(M2C_FIELD(var_s2, s32 *, 0x1BF0), 1, temp_s0, 0);
                }
                if (M2C_FIELD(temp_v0, u16 *, 0x2088) == temp_s0) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x1C7C), 1);
                    func_00973C70(M2C_FIELD(temp_v0, void **, 0x1C7C), var_s1 + 0x1C84);
                }
                var_s4 += 1;
                var_s2 += 4;
                var_s1 += 0x10;
            } while (var_s4 < (s32) M2C_FIELD(temp_v0, u8 *, 0x21CC));
        }
    }
}
