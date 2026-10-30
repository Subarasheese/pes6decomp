/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00308400(void);
extern s32 func_0026AD80(void);
M2C_UNK func_00269DF0();                            /* extern */
s32 func_00C99C50(s32, M2C_UNK, M2C_UNK);           /* extern */
extern char D_003AE970[];
extern char D_003AE97A[];
extern void *D_003AE9D0;

s32 func_002694C0(M2C_UNK arg0, s32 arg1) {
    M2C_UNK var_a2;
    s32 var_v0;

    if (func_00308400() != 0) {

    } else {
        var_v0 = (*(s8 *)D_003AE97A) != 0xC;
        if (var_v0 != 0) {
            var_v0 = func_0026AD80() > 0;
        }
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(D_003AE9D0, s8 *, 0xC0) == 0;
        }
        if (var_v0 != 0) {
            var_v0 = (*(s8 *)D_003AE970) < 0xB;
        }
        if (var_v0 != 0) {
            if (arg1 == 0) {
                var_a2 = -1;
            } else {
                var_a2 = 1;
            }
            M2C_FIELD(D_003AE9D0, s32 *, 0x20) = func_00C99C50(M2C_FIELD(D_003AE9D0, s32 *, 0x20), 2, var_a2);
            func_00269DF0();
        }
    }
    return 0;
}
