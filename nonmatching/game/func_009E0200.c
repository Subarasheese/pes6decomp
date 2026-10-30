/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */

void func_009E0200(void *arg0) {
    u16 temp_a0_2;
    u16 temp_a0_3;
    u8 temp_a0;

    temp_a0 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0x96:                                      /* switch 1 */
        temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x18);
        switch (temp_a0_2) {                        /* switch 2; irregular */
        default:                                    /* switch 1 */
        case 0xD0:                                  /* switch 2 */
        case 0xC0:                                  /* switch 2 */
block_14:
            func_00209A00(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, u16 *, 0xA4), 0);
            func_00207390(M2C_FIELD(arg0, void **, 4), 8);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
            /* fallthrough */
        case 0x9D:                                  /* switch 1 */
        case 0x82:                                  /* switch 1 */
        case 0x0:                                   /* switch 2 */
        case 0xF0:                                  /* switch 2 */
            return;
        }
        break;
    case 0x89:                                      /* switch 1 */
        temp_a0_3 = M2C_FIELD(arg0, u16 *, 0x18);
        if ((temp_a0_3 != 8) && (temp_a0_3 != 0x30) && (temp_a0_3 != 0x20)) {
            return;
        }
        goto block_14;
    }
}
