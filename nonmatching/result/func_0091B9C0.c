/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0091BDF0();                            /* extern */
extern void *D_00923FCC;

s32 func_0091B9C0(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    void **var_s3;

    func_0026E840(0x8400F803);
    var_s2 = 0;
    var_s0 = 0;
    M2C_FIELD(D_00923FCC, s32 *, 0x14) = (s32) ((s32) (M2C_FIELD(D_00923FCC, s32 *, 0x14) + 4) % 5);
    do {
        var_s1 = 0;
        var_s3 = D_00923FCC + var_s0 + 0x264;
loop_2:
        func_001EF900(*var_s3, 0);
        var_s1 += 1;
        var_s3 += 4;
        if (var_s1 < 2) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s0 += 8;
    } while (var_s2 < 0xA);
    func_0091BDF0();
    return 0;
}
