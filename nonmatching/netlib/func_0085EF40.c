/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0();                               /* extern */
extern void *D_003EA358;
extern char D_008B144E[];

s32 func_0085EF40(void) {
    s16 temp_s0_2;
    s32 temp_s1;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = D_003EA358;
    if (temp_s0 == NULL) {
        return -1;
    }
    temp_s1 = M2C_FIELD(((*func_008472D0() * 4) + temp_s0), s32 *, 0xC);
    if (M2C_FIELD(temp_s0, s8 *, 5) != 0) {
        return temp_s1;
    }
    if ((M2C_FIELD(temp_s0, s16 *, 0x2C) != 0) || (M2C_FIELD(temp_s0, s16 *, 0x2E) != 0)) {
        temp_s0_2 = M2C_FIELD(((((*(s8 *)D_008B144E) & 1) * 2) + D_003EA358), s16 *, 0x2C);
        if (temp_s0_2 != *func_008472D0()) {
            return temp_s1;
        }
    }
    switch (temp_s1) {                              /* irregular */
    case 1:
        return temp_s1;
    case 3:
        temp_v1 = (*func_008472D0() * 2) + D_003EA358;
        M2C_FIELD(temp_v1, u16 *, 0x22) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x22) + 1);
        M2C_FIELD(((*func_008472D0() * 4) + D_003EA358), s32 *, 0xC) = 2;
        M2C_FIELD(D_003EA358, s8 *, 6) = 1;
        /* fallthrough */
    case 2:
    case 0:
        M2C_FIELD(D_003EA358, s32 *, 8) = 0;
        return M2C_FIELD(((*func_008472D0() * 4) + D_003EA358), s32 *, 0xC);
    default:
        return temp_s1;
    }
}
