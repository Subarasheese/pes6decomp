/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008F7820(s32, u8, u32);                    /* extern */
u32 func_00C13110(s32, u32, M2C_UNK *);             /* extern */
void *func_00C13280(u32);                           /* extern */
s32 func_00C132C0(u32);                             /* extern */
s32 func_00C137C0(u32);                             /* extern */
u32 func_00C137F0();                                /* extern */
s32 func_00C13840();                                /* extern */
extern M2C_UNK func_008F7CC0;

void func_008F7B70(void *arg0) {
    s32 temp_s1;
    s32 var_s2;
    s32 var_s4;
    u32 temp_s5;
    u32 var_s1;
    u8 var_s3;

    temp_s1 = func_00C13840();
    temp_s5 = func_00C137F0();
    var_s4 = 0;
    var_s3 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0) == 0) {
            return;
        }
        var_s1 = func_00C13110(temp_s1, temp_s5, &func_008F7CC0);
        if (var_s1 < temp_s5) {
            var_s2 = 0;
loop_5:
            if ((func_00C132C0(var_s1) & 0xFF) == 1) {
                var_s3 = M2C_FIELD(func_00C13280(var_s1), u8 *, 1);
                goto block_11;
            }
            if (var_s4 < M2C_FIELD(arg0, s32 *, 0)) {
                if (func_008F7820(M2C_FIELD(arg0, s32 *, 4) + var_s2, var_s3, var_s1) != 0) {
                    var_s2 += 4;
                    var_s4 += 1;
                } else {
                    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                }
block_11:
                var_s1 = func_00C13110(func_00C137C0(var_s1), temp_s5, &func_008F7CC0);
                if (var_s1 >= temp_s5) {

                } else {
                    goto loop_5;
                }
            }
        }
    }
}
