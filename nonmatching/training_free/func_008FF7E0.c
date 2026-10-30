/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00308400(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00900420();                            /* extern */
M2C_UNK func_00C99850(s32);                         /* extern */
s32 func_00C99950();                                /* extern */
extern void *D_003AE9D0;

s32 func_008FF7E0(void) {
    if (func_00308400() != 0) {

    } else {
        if (M2C_FIELD(D_003AE9D0, s32 *, 0x18) == 0) {
            func_00C99850((s32) (func_00C99950() + 2) % 3);
        }
        func_00900420();
        func_0026E840(0x8400F803);
    }
    return 0;
}
