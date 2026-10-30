/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, u8);                     /* extern */
M2C_UNK func_001D7D80(s32, s64);                    /* extern */
M2C_UNK func_0099D2A0(s32, s8);                     /* extern */
M2C_UNK func_0099D490(s32, u8);                     /* extern */
extern void *D_00A7DDF8;

void func_009CE9C0(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s64 var_a1;
    s64 var_s0;
    u8 var_s2;
    u8 var_s3;

    if (arg1 == NULL) {
        var_s3 = 6;
        var_s2 = 0;
        var_s1 = 0;
    } else {
        var_s3 = M2C_FIELD(arg1, u8 *, 0x78);
        var_s2 = M2C_FIELD(arg1, u8 *, 0x79);
        var_s1 = M2C_FIELD(arg1, s32 *, 0);
    }
    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if ((s32) var_s3 >= 6) {
        func_001D7D60(temp_s0, 0U);
    } else {
        func_001D7D60(temp_s0, M2C_FIELD(D_00A7DDF8, u8 *, 1));
        func_001D7D80(temp_s0, (s64) ((s64) var_s3 << 0x30) >> 0x30);
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_s2 == 0) {
        func_0099D2A0(temp_s0_2, 0);
    } else {
        func_0099D2A0(temp_s0_2, (s8) M2C_FIELD(D_00A7DDF8, u8 *, 1));
        func_0099D490(temp_s0_2, var_s2);
    }
    if (var_s1 != 0) {
        var_s0 = 0;
        var_a1 = 0;
    } else {
        var_a1 = 1;
        var_s0 = 1;
    }
    func_001D7D80(M2C_FIELD(arg0, s32 *, 0), var_a1);
    func_001D7D80(M2C_FIELD(arg0, s32 *, 4), var_s0);
}
