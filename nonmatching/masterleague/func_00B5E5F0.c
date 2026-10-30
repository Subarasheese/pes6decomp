/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
extern void func_001D4E00(void *);
extern void func_002F4E10(void *);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B5E5F0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0x374);
            if (temp_a0 != 0) {
                func_00957070(temp_a0);
            }
            temp_a0_2 = M2C_FIELD(var_s0, s32 *, 0x41C);
            if (temp_a0_2 != 0) {
                func_00973460(temp_a0_2);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x2A);
        temp_a0_3 = M2C_FIELD(temp_v0, void **, 0x614);
        if (temp_a0_3 != NULL) {
            func_001B9C60(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0x618);
        if (temp_a0_4 != NULL) {
            func_001F2810(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_5 != NULL) {
            func_001D4E00(temp_a0_5);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x620));
        temp_a0_6 = M2C_FIELD(temp_v0, void **, 0x624);
        if (temp_a0_6 != NULL) {
            func_002F4E10(temp_a0_6);
        }
    }
}
