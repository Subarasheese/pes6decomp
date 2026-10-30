/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA358;
extern char D_008B21C0[];

s32 func_0085E280(s32 arg0) {
    M2C_UNK *var_a5;
    s32 temp_a1;
    s32 var_a2;
    s32 var_a4;
    s64 var_a3;
    s8 temp_a1_2;
    s8 temp_a6;
    void *temp_a6_2;

    var_a3 = 0;
    var_a2 = 0;
    var_a4 = 1;
    var_a5 = ((void *)D_008B21C0);
    M2C_FIELD(D_003EA358, s8 *, 5) = 0;
    do {
        temp_a6 = M2C_FIELD(var_a5, s8 *, 8);
        temp_a1 = var_a4 - 1;
        if ((temp_a6 == 1) || (temp_a6 == 2)) {
            temp_a6_2 = D_003EA358 + (temp_a1 * 4);
            if (M2C_FIELD(temp_a6_2, s32 *, 0x10) == 3) {
                if (M2C_FIELD((D_003EA358 + temp_a1), s8 *, 0x20) < M2C_FIELD(D_003EA358, s8 *, 0xD)) {
                    M2C_FIELD(temp_a6_2, s32 *, 0x10) = 0;
                    var_a2 = 1;
                    M2C_FIELD((D_003EA358 + temp_a1), s8 *, 0x20) = 0;
                }
                temp_a1_2 = M2C_FIELD((D_003EA358 + temp_a1), s8 *, 0x20);
                if (((s64) (var_a3 << 0x38) >> 0x38) < temp_a1_2) {
                    var_a3 = (s64) temp_a1_2;
                }
            } else {
                var_a2 = 1;
            }
        }
        var_a4 += 1;
        var_a5 += 0x1C;
    } while (var_a4 < 5);
    M2C_FIELD(D_003EA358, s8 *, 0xD) = (s8) var_a3;
    if ((arg0 != 0) && (var_a2 == 0)) {
        M2C_FIELD(D_003EA358, s8 *, 5) = 1;
        M2C_FIELD(D_003EA358, s8 *, 6) = 1;
    }
    return 3;
}
