/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001F2810(void *);
extern u32 func_00B0A9F0(void);
extern void func_001B9C60(void *);
M2C_UNK func_008CA7A0(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */
M2C_UNK func_009BED30();                            /* extern */

void func_00B096C0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s1_2;
    u32 var_s2;
    u32 var_s2_2;
    void *temp_a0_3;

    temp_v0 = func_00B0A9F0();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s1, s32 *, 0x30C);
            if (temp_a0 != 0) {
                func_00957070(temp_a0);
                M2C_FIELD(var_s1, s32 *, 0x30C) = 0;
            }
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 3U);
        var_s1_2 = 0;
        var_s2_2 = temp_v0;
        do {
            temp_a0_2 = M2C_FIELD(var_s2_2, s32 *, 0x2B0);
            if (temp_a0_2 != 0) {
                func_00973460(temp_a0_2);
                M2C_FIELD(var_s2_2, s32 *, 0x2B0) = 0;
            }
            var_s1_2 += 1;
            var_s2_2 += 4;
        } while (var_s1_2 < 0x17U);
        temp_a0_3 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_3 != NULL) {
            func_001D4E00(temp_a0_3);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x5CC));
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x5D4));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x5B4));
        func_008CA7A0(M2C_FIELD(temp_v0, s32 *, 0x3A8));
        func_009BED30();
    }
}
