/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00120240(void);
extern void func_0010FA90(s32, s32);
extern char D_00B001C0[];
extern char D_00B007D4[];
extern char D_00B007D8[];

s32 func_00AE2790(void) {
    s32 sp4C;
    M2C_UNK (*temp_v1)(s32 *);
    M2C_UNK *var_s2;
    s32 temp_s1;
    u32 var_s0;

    switch ((*(s32 *)D_00B007D8)) {                           /* irregular */
    case 0:
        (*(s32 *)D_00B007D8) += 1;
        /* fallthrough */
    case 1:
        func_00120240();
        temp_s1 = (*(s32 *)D_00B007D4);
        var_s0 = 0;
        var_s2 = ((void *)D_00B001C0);
        do {
            if (temp_s1 == M2C_FIELD(var_s2, s32 *, 0)) {
                temp_v1 = M2C_FIELD(var_s2, M2C_UNK (**)(s32 *), 8);
                sp4C = 0;
                if (temp_v1 != NULL) {
                    temp_v1(&sp4C);
                }
                func_0010FA90(M2C_FIELD(var_s2, s32 *, 4), sp4C);
            }
            var_s0 += 1;
            var_s2 += 0xC;
        } while (var_s0 < 3U);
        break;
    }
    return 0;
}
