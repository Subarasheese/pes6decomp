/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B177C0(void);
extern void func_001EF900(void *, s8);
extern void func_001EEE60(void *, void *);
M2C_UNK func_00B16BE0(s32, s32, f32 *);             /* extern */
M2C_UNK func_00B172E0();                            /* extern */
M2C_UNK func_00B17CF0();                            /* extern */
extern f32 D_003E7C6C;

void func_00B17940(void) {
    f32 sp6C;
    s32 var_s2;
    s32 var_s3;
    u32 temp_v0;
    void *temp_v0_2;

    sp6C = D_003E7C6C;
    temp_v0 = func_00B177C0();
    if (temp_v0 != 0) {
        func_00B172E0();
        var_s3 = 0;
        do {
            var_s2 = 0;
loop_3:
            func_00B16BE0(var_s3, var_s2, &sp6C);
            temp_v0_2 = temp_v0 + ((var_s3 & 0xFF) << 5) + ((var_s2 & 0xFF) * 4);
            func_001EEE60(M2C_FIELD(temp_v0_2, void **, 0x17C), &sp6C);
            func_001EF900(M2C_FIELD(temp_v0_2, void **, 0x17C), 1);
            var_s2 = (var_s2 + 1) & 0xFF;
            if (var_s2 < 8) {
                goto loop_3;
            }
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 6);
        func_00B17CF0();
    }
}
