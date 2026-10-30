/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00AE3240(void);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */

void func_00AE9830(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    u32 temp_v0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        var_s1 = 0;
        do {
            temp_a0 = M2C_FIELD((temp_v0 + ((var_s1 & 0xFF) * 4)), s32 *, 0x508);
            if (temp_a0 != 0) {
                func_00957070(temp_a0);
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 2);
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x5C4);
        if (temp_a0_2 != 0) {
            func_001EDD90(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, void **, 0x504);
        if (temp_a0_3 != NULL) {
            func_001B9C60(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0x5A8);
        if (temp_a0_4 != NULL) {
            func_001F2810(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 0x1CC);
        if (temp_a0_5 != NULL) {
            func_001D4E00(temp_a0_5);
            M2C_FIELD(temp_v0, void **, 0x1CC) = NULL;
        }
    }
}
