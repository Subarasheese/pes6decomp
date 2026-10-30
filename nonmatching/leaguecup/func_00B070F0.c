/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B080B0(void);
extern void func_001D4E00(void *);
extern void func_001B9C60(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B070F0(void) {
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s0;
    void *var_s4;

    temp_v0 = func_00B080B0();
    if (temp_v0 != 0) {
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x27C));
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_00957070(M2C_FIELD(var_s0, s32 *, 0xDC));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x12);
        var_s1_2 = 0;
        var_s0_2 = 0;
        do {
            var_s3 = 0;
            var_s4 = temp_v0 + var_s0_2;
loop_5:
            func_00957070(M2C_FIELD(var_s4, s32 *, 0x138));
            var_s3 += 1;
            var_s4 += 8;
            if (var_s3 < 2) {
                goto loop_5;
            }
            var_s1_2 += 1;
            var_s0_2 += 4;
        } while (var_s1_2 < 2);
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x280));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
