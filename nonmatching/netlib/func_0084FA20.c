/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
s64 func_00858C40(M2C_UNK);                         /* extern */
s64 func_009E1C90(s32);                             /* extern */
extern char D_008B13E0[];
extern char D_008B144A[];
extern char D_008B21C0[];

s32 func_0084FA20(s32 arg0, s32 arg1) {
    M2C_UNK *var_s0_2;
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s2;
    s32 var_s0;
    s32 var_s2_2;
    s32 var_s3;
    s64 temp_s5;
    s8 temp_s3;

    func_001C48E8(((void *)D_008B144A), 0, 3);
    if (arg0 != 0) {
        goto block_1;
    }
    if (func_002DCA50() == 0) {
        var_s0 = 0;
        if ((arg1 + 1) > 0) {
            var_s2 = ((void *)D_008B13E0);
            var_s1 = ((void *)D_008B13E0);
loop_14:
            temp_s3 = M2C_FIELD((var_s2 + ((s64) (func_00858C40(0) << 0x30) >> 0x30)), s8 *, 0x51);
            if (temp_s3 == (func_009E1C90(var_s0) & 0xFF)) {
                var_s0 += 1;
                M2C_FIELD(var_s1, s8 *, 0x6A) = 1;
                var_s2 += 8;
                var_s1 += 1;
                if (var_s0 >= (arg1 + 1)) {
                    goto block_10;
                }
                goto loop_14;
            }
            return 0;
        }
        goto block_10;
    }
block_1:
    var_s3 = 0;
    if ((arg1 + 1) > 0) {
        var_s1_2 = ((void *)D_008B13E0);
        var_s0_2 = ((void *)D_008B13E0);
loop_3:
        var_s2_2 = 1;
        temp_s5 = (s64) (func_009E1C90(var_s3) << 0x38) >> 0x38;
        if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1) >= 2) {
loop_5:
            if (((s64) (temp_s5 << 0x38) >> 0x38) != M2C_FIELD((var_s1_2 + var_s2_2), s8 *, 0x51)) {
                return 0;
            }
            var_s2_2 += 1;
            if (var_s2_2 >= (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1)) {
                goto block_9;
            }
            goto loop_5;
        }
block_9:
        M2C_FIELD(var_s0_2, s8 *, 0x6A) = 1;
        var_s3 += 1;
        var_s1_2 += 8;
        var_s0_2 += 1;
        if (var_s3 >= (arg1 + 1)) {
            goto block_10;
        }
        goto loop_3;
    }
block_10:
    return 1;
}
