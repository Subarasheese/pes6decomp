/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B447A0(void);
extern void func_001D4E00(void *);
extern void func_002F4E10(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002ED130(s32);                         /* extern */
M2C_UNK func_008CA7A0(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B3FF50(void) {
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2_2;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x54C));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x20));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x5F4));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x5FC));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x5B0));
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            func_00972290(M2C_FIELD(var_s1, s32 *, 0x5DC));
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 2);
        var_s1_2 = 0;
        var_s2_2 = temp_v0;
        do {
            func_00972290(M2C_FIELD(var_s2_2, s32 *, 0x5E8));
            var_s1_2 += 1;
            var_s2_2 += 4;
        } while (var_s1_2 < 2);
        func_008CA7A0(M2C_FIELD(temp_v0, s32 *, 0xC));
        func_002ED130(M2C_FIELD(temp_v0, s32 *, 0x14));
        func_002F4E10(M2C_FIELD(temp_v0, void **, 0x6C4));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 4));
    }
}
