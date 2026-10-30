/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001B7BC0(s32, s8 *);                   /* extern */
M2C_UNK func_001B7D40(s32, s32);                    /* extern */
M2C_UNK sprintf(s8 *, M2C_UNK *, s32);        /* extern */
extern char D_00CB6EE0[];
extern char D_00CC0CA0[];
extern char D_00CE4E90[];
extern char D_00CE4E98[];

void func_00BC3E30(void) {
    s8 sp50;
    M2C_UNK *var_s1;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_v0;
    s8 *var_v1;
    u32 temp_s0;
    u32 var_s2;

    if ((*(s32 *)D_00CE4E98) != 0) {
        temp_s0 = (*(u32 *)D_00CE4E90);
        var_s2 = 0;
        var_s1 = ((void *)D_00CB6EE0);
        do {
            if ((temp_s0 >> var_s2) & 1) {
                temp_v1 = 1 << var_s2;
                if ((temp_v1 != 0x8000) && (temp_v1 != 0x4000)) {
                    func_001B7D40(M2C_FIELD(var_s1, s32 *, 0), M2C_FIELD(var_s1, s32 *, 4));
                } else {
                    temp_s3 = M2C_FIELD(var_s1, s32 *, 0);
                    var_v1 = &sp50;
                    var_v0 = 0x20;
                    if (var_v1 != NULL) {
                        do {
                            *var_v1 = 0;
                            var_v0 -= 1;
                            var_v1 += 1;
                        } while (var_v0 != 0);
                    }
                    sprintf(&sp50, ((void *)D_00CC0CA0), func_001F08B0(M2C_FIELD(var_s1, s32 *, 4)));
                    func_001B7BC0(temp_s3, &sp50);
                }
            }
            var_s2 += 1;
            var_s1 += 8;
        } while (var_s2 < 0x1CU);
        (*(s32 *)D_00CE4E98) = 0;
    }
}
