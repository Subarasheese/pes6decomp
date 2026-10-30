/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s8 func_00BECA10(void);
extern void func_001D7D80(void *, s16);
extern s32 func_001D7BC0(void *);
M2C_UNK func_00B90540(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90560(s32, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00B90640(s32, void *, M2C_UNK);        /* extern */
s64 func_00BECA60(s64);                             /* extern */

void func_00BF1B90(void *arg0, s32 arg1) {
    M2C_UNK var_s3;
    s32 var_s2;
    s64 temp_s0;
    s64 temp_v0;
    s64 temp_v1;
    s64 var_s0;
    s64 var_s0_2;
    s64 var_s1;
    void *temp_s5;

    var_s3 = 0;
    var_s2 = 0;
    var_s1 = 0;
    var_s0 = 0;
    temp_v1 = (s64) (func_00BECA10() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 10:                                        /* switch 1 */
        var_s0_2 = 0xA << 0x38;
block_24:
        var_s0 = var_s0_2 >> 0x38;
        break;
    case 7:                                         /* switch 1 */
        var_s0_2 = 7 << 0x38;
        goto block_24;
    case 9:                                         /* switch 1 */
        var_s0_2 = 9 << 0x38;
        goto block_24;
    case 6:                                         /* switch 1 */
        var_s0_2 = 6 << 0x38;
        goto block_24;
    case 5:                                         /* switch 1 */
        var_s0_2 = 5 << 0x38;
        goto block_24;
    case 2:                                         /* switch 1 */
        var_s0_2 = 2 << 0x38;
        goto block_24;
    }
    if ((temp_v1 != 0xA) && (temp_v1 != 7) && (temp_v1 != 9) && (temp_v1 != 6) && (temp_v1 != 5) && (temp_v1 != 2)) {

    } else {
        var_s3 = 1;
        temp_v0 = (s64) (func_00BECA60((s64) (var_s0 << 0x38) >> 0x38) << 0x38) >> 0x38;
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_s1 = 0;
            var_s2 = 0;
            break;
        case 0:                                     /* switch 2 */
            var_s1 = 0;
            var_s3 = 0;
            var_s2 = 0;
            break;
        default:                                    /* switch 2 */
            var_s1 = 1 & 0xFFFF;
            var_s2 = temp_v0 - 2;
            var_s3 = 0;
            break;
        }
    }
    temp_s5 = *M2C_FIELD(arg0, void ***, 4);
    temp_s0 = (s64) (func_001D7BC0(temp_s5) << 0x30) >> 0x30;
    func_001D7D80(temp_s5, (s16) ((s64) (var_s1 << 0x30) >> 0x30));
    func_00B90640(arg1, temp_s5, 0);
    func_00B90560(arg1, temp_s5, 1, var_s3, var_s2);
    func_00B90540(arg1, 1);
    func_001D7D80(temp_s5, (s16) temp_s0);
}
