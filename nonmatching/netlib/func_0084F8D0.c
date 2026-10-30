/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
s16 *func_008472D0();                               /* extern */
s64 func_00858C40(M2C_UNK);                         /* extern */
extern char D_008B13E0[];
extern char D_008B21C0[];

s32 func_0084F8D0(s32 arg0, s32 *arg1) {
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s2;
    M2C_UNK *var_s3;
    s32 *var_s0;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_s4;
    s8 temp_v1;

    var_s0 = arg1;
    if (arg0 != 0) {
        goto block_1;
    }
    if (func_002DCA50() == 0) {
        var_s1 = 0;
        var_s2 = ((void *)D_008B13E0);
loop_14:
        if (M2C_FIELD((var_s2 + ((s64) (func_00858C40(0) << 0x30) >> 0x30)), s8 *, 0x51) == *var_s0) {
            var_s1 += 1;
            var_s0 += 4;
            var_s2 += 8;
            if (var_s1 >= 3) {
                goto block_11;
            }
            goto loop_14;
        }
        goto block_23;
    }
block_1:
    var_s4 = 0;
    var_s1_2 = ((void *)D_008B13E0);
loop_2:
    if (*var_s0 != -1) {
        var_s2_2 = 1;
        var_s3 = ((void *)D_008B21C0);
loop_4:
        if (var_s2_2 != *func_008472D0()) {
            temp_v1 = M2C_FIELD(var_s3, s8 *, 8);
            if (((temp_v1 == 1) || (temp_v1 == 2)) && (M2C_FIELD((var_s1_2 + var_s2_2), s8 *, 0x51) != *var_s0)) {
block_23:
                return 0;
            }
            goto block_8;
        }
block_8:
        var_s2_2 += 1;
        var_s3 += 0x1C;
        if (var_s2_2 >= 5) {
            var_s4 += 1;
            var_s0 += 4;
            var_s1_2 += 8;
            if (var_s4 >= 3) {
                goto block_11;
            }
            goto loop_2;
        }
        goto loop_4;
    }
block_11:
    return 1;
}
