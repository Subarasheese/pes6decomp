/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B62380(void);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B64380(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_7;
    void *temp_a0_8;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s1, s32 *, 0xC);
            if (temp_a0 != 0) {
                func_00957070(temp_a0);
            }
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0x10);
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x9C);
        if (temp_a0_2 != 0) {
            func_00957070(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, void **, 0x414);
        if (temp_a0_3 != NULL) {
            func_001B9C60(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0x418);
        if (temp_a0_4 != NULL) {
            func_001F2810(temp_a0_4);
        }
        var_s1_2 = 0;
        var_s2_2 = temp_v0;
        do {
            temp_a0_5 = M2C_FIELD(var_s2_2, s32 *, 0x234);
            if (temp_a0_5 != 0) {
                func_00957070(temp_a0_5);
            }
            temp_a0_6 = M2C_FIELD(var_s2_2, s32 *, 0x3C4);
            if (temp_a0_6 != 0) {
                func_00973460(temp_a0_6);
            }
            var_s1_2 += 1;
            var_s2_2 += 4;
        } while (var_s1_2 < 0x14);
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x54));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x50));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x4C));
        temp_a0_7 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_7 != NULL) {
            func_001D4E00(temp_a0_7);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
        temp_a0_8 = M2C_FIELD(temp_v0, void **, 0xA0);
        if (temp_a0_8 != NULL) {
            func_001D4E00(temp_a0_8);
            M2C_FIELD(temp_v0, void **, 0xA0) = NULL;
        }
    }
}
