/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_009AE900(void);
extern void func_001F2810(void *);
extern void func_001B9C60(void *);
M2C_UNK func_001DF7B0(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_009AD750(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0_2;

    temp_v0 = func_009AE900();
    if (temp_v0 != 0) {
        func_001DF7B0(M2C_FIELD(temp_v0, s32 *, 4));
        func_001DF7B0(M2C_FIELD(temp_v0, s32 *, 8));
        func_001DF7B0(M2C_FIELD(temp_v0, s32 *, 0xC));
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x8C8);
        if (temp_a0 != 0) {
            func_00971E30(temp_a0);
        }
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x10));
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x14));
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_00973460(M2C_FIELD(var_s0, s32 *, 0xD0));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x5D8));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x5DC));
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_2 != NULL) {
            func_001D4E00(temp_a0_2);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x8CC));
    }
}
