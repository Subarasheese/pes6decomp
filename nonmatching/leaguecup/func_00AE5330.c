/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_009721D0(s32, f32 *);                  /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973C70(void *, f32 *);               /* extern */
M2C_UNK func_00AE4F40(u8);                          /* extern */
M2C_UNK func_00AE51E0(u8);                          /* extern */

void func_00AE5330(s32 arg0) {
    f32 sp40;
    f32 sp44;
    s32 var_s1;
    s32 var_s2_2;
    u32 temp_v0;
    u32 var_s1_2;
    u32 var_s2;

    temp_v0 = func_00AE7320();
    if (temp_v0 != 0) {
        switch (arg0) {                             /* irregular */
        case 2:
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x4F4), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x4E0), 1);
            func_009721D0(M2C_FIELD(temp_v0, s32 *, 0x15C), &sp40);
            if (((s32) M2C_FIELD(temp_v0, u8 *, 0x589) % 10) >= 5) {
                sp40 += M2C_FIELD(temp_v0, f32 *, 0x4F8);
                sp44 += M2C_FIELD(temp_v0, f32 *, 0x4FC);
                func_00973C70(M2C_FIELD(temp_v0, void **, 0x4E0), &sp40);
                func_00973C70(M2C_FIELD(temp_v0, void **, 0x4F4), &sp40);
            } else {
                sp40 += M2C_FIELD(temp_v0, f32 *, 0x508);
                sp44 += M2C_FIELD(temp_v0, f32 *, 0x50C);
                func_00973C70(M2C_FIELD(temp_v0, void **, 0x4E0), &sp40);
                func_00973C70(M2C_FIELD(temp_v0, void **, 0x4F4), &sp40);
                return;
            }
            break;
        case 1:
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x15C), 1);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x158), 1);
            func_00AE51E0(M2C_FIELD(temp_v0, u8 *, 0x58A));
            func_00AE4F40(M2C_FIELD(temp_v0, u8 *, 0x589));
            var_s1 = 0;
            var_s2 = temp_v0;
            do {
                func_001D7D60(M2C_FIELD(var_s2, void **, 0x538), 0);
                var_s1 += 1;
                var_s2 += 4;
            } while (var_s1 < 0x14);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x4E0), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x4F4), 0);
            return;
        default:
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x15C), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x158), 0);
            func_00AE51E0(M2C_FIELD(temp_v0, u8 *, 0x58A));
            var_s2_2 = 0;
            var_s1_2 = temp_v0;
            do {
                func_001D7D60(M2C_FIELD(var_s1_2, void **, 0x538), 0);
                var_s2_2 += 1;
                var_s1_2 += 4;
            } while (var_s2_2 < 0x14);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x4E0), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x4F4), 0);
            return;
        }
    }
}
