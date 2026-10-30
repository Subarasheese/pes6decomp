/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B14800(void);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */

void func_00B12D00(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s4;
    u32 temp_v0;
    u32 var_s2;
    u32 var_s3;
    void *temp_a0_3;

    temp_v0 = func_00B14800();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0xBCC);
        if (temp_a0 != 0) {
            func_00971E30(temp_a0);
        }
        var_s0 = 0;
        var_s3 = temp_v0;
        do {
            var_s4 = 0;
            var_s2 = var_s3;
loop_5:
            temp_a0_2 = M2C_FIELD(var_s2, s32 *, 0x7CC);
            if (temp_a0_2 != 0) {
                func_00957070(temp_a0_2);
                M2C_FIELD(var_s2, s32 *, 0x7CC) = 0;
            }
            var_s4 += 1;
            var_s2 += 4;
            if (var_s4 < 2) {
                goto loop_5;
            }
            var_s0 += 1;
            var_s3 += 8;
        } while (var_s0 < 8);
        temp_a0_3 = M2C_FIELD(temp_v0, void **, 0x760);
        if (temp_a0_3 != NULL) {
            func_001D4E00(temp_a0_3);
            M2C_FIELD(temp_v0, void **, 0x760) = NULL;
        }
    }
}
