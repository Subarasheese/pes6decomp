/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00A009E0(void *);                      /* extern */
M2C_UNK func_00ADA160(void *, u8);                  /* extern */

void func_00A02030(void *arg0) {
    s16 var_v0;
    u16 temp_v1;

    M2C_FIELD(arg0, s8 *, 0x16) = (s8) M2C_FIELD(arg0, u16 *, 0x1A);
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x1A);
    switch (temp_v1) {                              /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_v0 = 8;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            var_v0 = 1;
            /* fallthrough */
        case 8:                                     /* switch 2 */
block_11:
            M2C_FIELD(arg0, s16 *, 0x18) = var_v0;
            break;
        }
        break;
    case 0x5:                                       /* switch 1 */
    case 0x6:                                       /* switch 1 */
        var_v0 = 3;
        goto block_11;
    case 0xFD:                                      /* switch 1 */
        var_v0 = 0x18;
        goto block_11;
    }
    func_00A009E0(arg0);
    func_00ADA160(arg0, M2C_FIELD(arg0, u8 *, 0x4D));
    M2C_FIELD(arg0, u16 *, 0x1A) = 0xFFU;
}
