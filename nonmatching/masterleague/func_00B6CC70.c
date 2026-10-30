/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D67B0(void *);
extern u32 func_00B695D0(void);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_002E4F00(s32);                         /* extern */
M2C_UNK func_0095A980();                            /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */
M2C_UNK func_00B691A0(s32);                         /* extern */

void func_00B6CC70(void) {
    s32 temp_a0_5;
    s32 var_s0;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2;
    u32 var_s4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_6;

    temp_v0 = func_00B695D0();
    var_s4 = temp_v0;
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(var_s4, void **, 0x3310);
        if (temp_a0 != NULL) {
            func_001B9C60(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(var_s4, void **, 0x3314);
        if (temp_a0_2 != NULL) {
            func_001F2810(temp_a0_2);
        }
        var_s3 = 0;
        var_s2 = var_s4;
        var_s1 = var_s4;
        do {
            if (M2C_FIELD(var_s4, u8 *, 0x377C) == 1) {
                temp_a0_3 = *M2C_FIELD(var_s1, void ***, 0x367C);
                if (temp_a0_3 != NULL) {
                    func_001D67B0(temp_a0_3);
                }
            }
            if (M2C_FIELD(var_s4, u8 *, 0x377C) == 1) {
                temp_a0_4 = *M2C_FIELD(var_s1, void ***, 0x36FC);
                if (temp_a0_4 != NULL) {
                    func_001D67B0(temp_a0_4);
                }
            }
            temp_a0_5 = M2C_FIELD((var_s2 + 0xC), s32 *, 0x188);
            if (temp_a0_5 != 0) {
                func_00973460(temp_a0_5);
            }
            var_s3 += 1;
            var_s2 += 0x198;
            var_s1 += 4;
        } while (var_s3 < 0x20);
        temp_a0_6 = M2C_FIELD(var_s4, void **, 0);
        if (temp_a0_6 != NULL) {
            func_001D4E00(temp_a0_6);
            M2C_FIELD(var_s4, void **, 0) = NULL;
        }
        func_00972290(M2C_FIELD(var_s4, s32 *, 0x3660));
        func_0095A980();
        func_002E4F00(M2C_FIELD(var_s4, s32 *, 0x3664));
        if (M2C_FIELD(var_s4, u8 *, 0x377C) == 1) {
            var_s0 = 0;
            do {
                func_00B691A0(M2C_FIELD(var_s4, s32 *, 0x367C));
                func_00B691A0(M2C_FIELD(var_s4, s32 *, 0x36FC));
                var_s0 += 1;
                var_s4 += 4;
            } while (var_s0 < 0x20);
        }
    }
}
