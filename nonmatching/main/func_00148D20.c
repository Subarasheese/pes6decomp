/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00146C70(M2C_UNK *, M2C_UNK *, s32, s32 *); /* extern */
M2C_UNK func_00149260(s32, s32);                    /* extern */
void *func_001493F0(s32, s32);                      /* extern */
extern char D_003C6AD0[];
extern char D_003C70B0[];

s32 func_00148D20(s32 arg0, s32 *arg1) {
    s32 *var_s1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s3;
    void *temp_v0;

    var_s1 = arg1;
    if ((arg0 != 0) && (var_s1 != NULL)) {
        var_s0 = 0;
        if (arg0 > 0) {
            do {
                var_s3 = 0;
                if (0 < 2) {
                    do {
                        temp_v0 = func_001493F0(var_s3, *var_s1);
                        if (temp_v0 != NULL) {
                            M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
                        }
                        var_s3 += 1;
                    } while (var_s3 < 2);
                }
                var_s0 += 1;
                var_s1 += 4;
            } while (var_s0 < arg0);
        }
        var_s1_2 = 0;
        if (0 < 2) {
            do {
                var_s0_2 = 0;
                if (0 < 2) {
                    do {
                        func_00149260(var_s1_2, var_s0_2);
                        var_s0_2 += 1;
                    } while (var_s0_2 < 2);
                }
                var_s1_2 += 1;
            } while (var_s1_2 < 2);
        }
        return 1;
    }
    func_00146C70(((void *)D_003C70B0), ((void *)D_003C6AD0), arg0, var_s1);
    return 0;
}
