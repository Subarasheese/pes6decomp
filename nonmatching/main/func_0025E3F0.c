/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154060(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0025ED00(M2C_UNK, s16 *);              /* extern */
extern char D_0058D1E0[];
extern char D_0058D1E4[];
extern char D_0058D1E6[];

void func_0025E3F0(void) {
    M2C_UNK *var_s0;
    s32 temp_s1;
    s32 var_s2;

    func_0025ED00(1, ((void *)D_0058D1E4));
    temp_s1 = (*(s16 *)D_0058D1E4) * (*(s16 *)D_0058D1E6);
    var_s2 = 0;
    var_s0 = ((void *)D_0058D1E0);
    do {
        var_s2 += 1;
        M2C_FIELD(var_s0, s32 *, 8) = func_00154060(temp_s1, 1);
        var_s0 += 4;
    } while (var_s2 < 2);
}
