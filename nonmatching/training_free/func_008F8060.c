/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00308400(void);
M2C_UNK func_0026E840(M2C_UNK, void *);             /* extern */
extern void *D_003AE9D0;

s32 func_008F8060(void) {
    if (func_00308400() != 0) {
        return 0;
    }
    M2C_FIELD(D_003AE9D0, u32 *, 4) = (u32) ((u32) (M2C_FIELD(D_003AE9D0, u32 *, 4) + 1) % 6U);
    func_0026E840(0x8400F803, D_003AE9D0);
    M2C_FIELD(D_003AE9D0, s8 *, 0x5A4) = 2;
    M2C_FIELD(D_003AE9D0, s8 *, 0x5A5) = (s8) M2C_FIELD(D_003AE9D0, u32 *, 4);
    M2C_FIELD(D_003AE9D0, s16 *, 0x5A6) = 0;
    return 0;
}
