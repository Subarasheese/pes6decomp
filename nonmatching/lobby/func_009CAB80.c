/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00964900(M2C_UNK);                         /* extern */
s32 func_00964910();                                /* extern */
u8 func_00964A60(s32);                              /* extern */
u8 func_00964A90(s32);                              /* extern */
u8 func_00964AE0(s32);                              /* extern */
u8 func_00964B10(s32);                              /* extern */
M2C_UNK func_009D21D0(s32, s32);                    /* extern */
M2C_UNK func_009D2280(s32);                         /* extern */
M2C_UNK func_009D27B0(s32, u8);                     /* extern */
M2C_UNK func_009D2800(s32, u8);                     /* extern */
M2C_UNK func_009D2960(s32, u8);                     /* extern */
M2C_UNK func_009D2A50(s32, u8);                     /* extern */
extern void *D_00A7DDA0;

void func_009CAB80(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    u8 var_s1;
    u8 var_s2;
    u8 var_s3;
    u8 var_s4;

    var_s0 = 0;
loop_7:
    if (var_s0 < (s32) M2C_FIELD(D_00A7DDA0, u8 *, 5)) {
        if (M2C_FIELD(D_00A7DDA0, u8 *, 2) != var_s0) {
            var_s1 = func_00964A90(var_s0);
            var_s4 = func_00964AE0(var_s0);
            var_s3 = func_00964A60(var_s0);
            var_s2 = func_00964B10(var_s0);
        } else {
            var_s4 = M2C_FIELD(D_00A7DDA0, u8 *, 9);
            var_s3 = M2C_FIELD(D_00A7DDA0, u8 *, 8);
            var_s2 = M2C_FIELD(D_00A7DDA0, u8 *, 6);
            var_s1 = M2C_FIELD(D_00A7DDA0, u8 *, 7);
        }
        func_009D2A50(var_s0, var_s1);
        func_009D2960(var_s0, var_s4);
        func_009D2800(var_s0, var_s3);
        func_009D27B0(var_s0, var_s2);
        var_s0 += 1;
        goto loop_7;
    }
    temp_v0 = func_00964910();
    func_009D2280(temp_v0);
    if (temp_v0 != 0) {
        temp_s0 = func_00964900(0);
        func_009D21D0(temp_s0, func_00964900(1));
    }
}
