/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00AE3240(void);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00AE9710(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 var_s1;
    s32 var_s1_2;
    u32 temp_v0;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        var_s1 = 0;
        do {
            temp_a0 = M2C_FIELD((temp_v0 + ((var_s1 & 0xFF) * 4)), s32 *, 0xDAC);
            if (temp_a0 != 0) {
                func_00957070(temp_a0);
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 2);
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0xDB4);
        if (temp_a0_2 != 0) {
            func_00957070(temp_a0_2);
        }
        var_s1_2 = 0;
        do {
            temp_a0_3 = M2C_FIELD((temp_v0 + ((var_s1_2 & 0xFF) * 4)), s32 *, 0xEC0);
            if (temp_a0_3 != 0) {
                func_00973460(temp_a0_3);
            }
            var_s1_2 = (var_s1_2 + 1) & 0xFF;
        } while (var_s1_2 < 0x20);
        temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0xF40);
        if (temp_a0_4 != 0) {
            func_00973460(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 0xD98);
        if (temp_a0_5 != NULL) {
            func_001B9C60(temp_a0_5);
        }
        temp_a0_6 = M2C_FIELD(temp_v0, void **, 0xF68);
        if (temp_a0_6 != NULL) {
            func_001F2810(temp_a0_6);
        }
        temp_a0_7 = M2C_FIELD(temp_v0, void **, 0xB08);
        if (temp_a0_7 != NULL) {
            func_001D4E00(temp_a0_7);
            M2C_FIELD(temp_v0, void **, 0xB08) = NULL;
        }
    }
}
