/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern u32 func_00B447A0(void);
extern void func_001D7D60(void *, s8);
extern u8 func_0022F8D0(void);
M2C_UNK func_00956D80(void *, M2C_UNK, u16, M2C_UNK); /* extern */
M2C_UNK func_00973C70(void *, s32);                 /* extern */
M2C_UNK func_00B3E7C0(s32);                         /* extern */

void func_00B3E5F0(s32 arg0) {
    s32 var_s1_2;
    s32 var_s4;
    u16 temp_a2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2;
    u32 var_s2_2;
    u32 var_s3_2;
    u32 var_s4_2;
    void *var_s3;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        func_00B3E7C0(arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x600), 0);
        var_s4 = 0;
        var_s2 = temp_v0;
        var_s3 = temp_v0 + ((arg0 & 0xFF) << 5);
        var_s1 = temp_v0;
        do {
            if (M2C_FIELD(var_s3, u16 *, 0x620) == 0xFFFF) {
                func_001EF900(M2C_FIELD(var_s2, void **, 0x550), 0);
            } else if (((func_0022F8D0() & 0xFF) == 2) && (M2C_FIELD(temp_v0, s32 *, 0x6B4) == 0)) {
                func_001EF900(M2C_FIELD(var_s2, void **, 0x550), 0);
            } else {
                func_00956D80(M2C_FIELD(var_s2, void **, 0x550), 4, M2C_FIELD(var_s3, u16 *, 0x620), 0);
                func_001EF900(M2C_FIELD(var_s2, void **, 0x550), 1);
                if (M2C_FIELD(var_s3, u16 *, 0x620) == M2C_FIELD(temp_v0, u16 *, 0x6B0)) {
                    func_00973C70(M2C_FIELD(temp_v0, void **, 0x600), var_s1 + 0x2FC);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x600), 1);
                }
            }
            var_s4 += 1;
            var_s3 += 2;
            var_s2 += 4;
            var_s1 += 0x10;
        } while (var_s4 < 0x10);
        var_s1_2 = 0;
        var_s4_2 = temp_v0;
        var_s3_2 = temp_v0;
        var_s2_2 = temp_v0;
        do {
            temp_a2 = M2C_FIELD(var_s4_2, u16 *, 0x6A0);
            if (temp_a2 == 0xFFFF) {
                func_001EF900(M2C_FIELD(var_s3_2, void **, 0x590), 0);
            } else {
                func_00956D80(M2C_FIELD(var_s3_2, void **, 0x590), 4, temp_a2, 0);
                func_001EF900(M2C_FIELD(var_s3_2, void **, 0x590), 1);
                if (M2C_FIELD(var_s4_2, u16 *, 0x6A0) == M2C_FIELD(temp_v0, u16 *, 0x6B0)) {
                    func_00973C70(M2C_FIELD(temp_v0, void **, 0x600), var_s2_2 + 0x4A0);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x600), 1);
                }
            }
            var_s1_2 += 1;
            var_s4_2 += 2;
            var_s3_2 += 4;
            var_s2_2 += 0x10;
        } while (var_s1_2 < 8);
    }
}
