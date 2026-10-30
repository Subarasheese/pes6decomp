/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009C72C0(void);
extern void func_00213800(void *);
extern void func_009C7840(s8);
s32 func_009C8E90(void *);                          /* extern */
M2C_UNK func_009D9010();                            /* extern */
M2C_UNK func_009DDB00(M2C_UNK);                     /* extern */
extern void *D_00A7DD80;

u8 func_009C9300(void) {
    s32 temp_v0;
    u8 temp_v0_2;

    if (M2C_FIELD(D_00A7DD80, u8 *, 1) != 0) {
        M2C_FIELD(D_00A7DD80, u8 *, 3) = 4U;
        M2C_FIELD(D_00A7DD80, s8 *, 0) = 4;
        return M2C_FIELD(D_00A7DD80, u8 *, 3);
    }
    temp_v0 = func_009C8E90(D_00A7DD80);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_v0_2 = M2C_FIELD(D_00A7DD80, u8 *, 2);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            func_00213800(M2C_FIELD(D_00A7DD80, void **, 8));
            func_009DDB00(0);
            func_009D9010();
            M2C_FIELD(D_00A7DD80, s8 *, 0) = 3;
            break;
        case 1:                                     /* switch 2 */
            func_00213800(M2C_FIELD(D_00A7DD80, void **, 8));
            func_009C7840(0);
            M2C_FIELD(D_00A7DD80, s8 *, 0) = 2;
            break;
        case 0:                                     /* switch 2 */
            func_00213800(M2C_FIELD(D_00A7DD80, void **, 8));
            func_009DDB00(0);
            func_009C72C0();
            M2C_FIELD(D_00A7DD80, s8 *, 0) = 1;
            break;
        }
    case 0:                                         /* switch 1 */
    default:                                        /* switch 1 */
        return 0U;
    case 2:                                         /* switch 1 */
        M2C_FIELD(D_00A7DD80, u8 *, 3) = 2U;
        M2C_FIELD(D_00A7DD80, s8 *, 0) = 4;
        return M2C_FIELD(D_00A7DD80, u8 *, 3);
    }
}
