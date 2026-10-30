/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817AD0(M2C_UNK);                         /* extern */
M2C_UNK func_009E09D0(M2C_UNK);                     /* extern */
u8 func_009E0DD0(void *);                           /* extern */
M2C_UNK func_00D0C090();                            /* extern */
extern void *D_00A7DEF0;

u8 func_009E11B0(void) {
    s32 temp_v0;
    u8 temp_v1;

    if (D_00A7DEF0 != NULL) {
        temp_v1 = M2C_FIELD(D_00A7DEF0, u8 *, 0);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            return M2C_FIELD(D_00A7DEF0, u8 *, 1);
        case 1:                                     /* switch 1 */
            temp_v0 = func_00817AD0(0x01FB0006);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 2:                                 /* switch 2 */
                M2C_FIELD(D_00A7DEF0, u8 *, 0) = 2U;
                break;
            default:                                /* switch 2 */
                M2C_FIELD(*(void **)0xA7DEF0, s8 *, 1) = 0;
                M2C_FIELD(D_00A7DEF0, u8 *, 0) = 0U;
                func_009E09D0(1);
                func_00D0C090();
                break;
            }
        default:                                    /* switch 1 */
            return 0U;
        case 0:                                     /* switch 1 */
            return func_009E0DD0(D_00A7DEF0);
        }
    } else {
        return 1U;
    }
}
