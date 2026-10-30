/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B21C0[];
extern char D_008B22BA[];
extern char D_008B22BB[];
extern char D_008B22BC[];

u8 func_00858580(s64 arg0) {
    s8 spC;
    s8 spD;
    s8 spE;
    M2C_UNK *var_a7;
    s32 var_a6;
    s32 var_v0_3;
    s64 temp_v1;
    s8 *var_a2;
    s8 var_v0_2;
    u8 var_v0;
    void *var_v0_4;

    temp_v1 = (s64) (arg0 << 0x30) >> 0x30;
    if (temp_v1 == -1) {
        var_a7 = ((void *)D_008B21C0);
        var_a6 = 1;
loop_2:
        if (((void *)D_008B21C0) == NULL) {
            var_v0_2 = 0;
        } else {
            var_a2 = &spC;
            var_v0_3 = 3;
            if (var_a2 != NULL) {
                do {
                    *var_a2 = 0;
                    var_v0_3 -= 1;
                    var_a2 += 1;
                } while (var_v0_3 != 0);
            }
            spC = (*(s8 *)D_008B22BC);
            var_v0_2 = (*(s8 *)D_008B22BA);
            spD = (*(s8 *)D_008B22BA);
            spE = (*(s8 *)D_008B22BB);
        }
        if (var_a6 < (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) + 1)) {
            if (M2C_FIELD(var_a7, u8 *, 0x12) != 0) {
                var_a6 += 1;
                var_a7 += 0x1C;
                goto loop_2;
            }
            return 0U;
        }
        return 1U;
    }
    if (((void *)D_008B21C0) == NULL) {
        var_v0_4 = NULL;
    } else if ((temp_v1 > 0) && (temp_v1 < 9)) {
        var_v0_4 = ((void *)D_008B21C0) + ((temp_v1 - 1) * 0x1C);
    } else {
        var_v0_4 = NULL;
    }
    if (var_v0_4 == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = M2C_FIELD(var_v0_4, u8 *, 0x12);
    }
    return var_v0;
}
