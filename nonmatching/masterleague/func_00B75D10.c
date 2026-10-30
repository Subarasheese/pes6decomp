/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
extern void func_001F2810(void *);
extern void func_001D4E00(void *);
extern void func_001B9C60(void *);
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */
M2C_UNK func_00B76750(s32);                         /* extern */

void func_00B75D10(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0x604);
            if (temp_a0 != 0) {
                func_00973460(temp_a0);
            }
            func_00B76750(M2C_FIELD(var_s0, s32 *, 0x9A4));
            func_00B76750(M2C_FIELD(var_s0, s32 *, 0xA24));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x784);
        if (temp_a0_2 != NULL) {
            func_001B9C60(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, void **, 0x78C);
        if (temp_a0_3 != NULL) {
            func_001F2810(temp_a0_3);
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x7D4));
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_4 != NULL) {
            func_001D4E00(temp_a0_4);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
    }
}
