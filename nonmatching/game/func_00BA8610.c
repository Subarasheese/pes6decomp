/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BD9E70();                                /* extern */

s32 func_00BA8610(void *arg0) {
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;

    if ((func_009E1C90(1) & 0xFF) != 5) {
        if ((func_009E1C90(1) & 0xFF) == 0xC) {
            goto block_3;
        }
        goto block_14;
    }
block_3:
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0xEE:                                      /* switch 1 */
        if (func_00207D80(temp_a0, 0x3E) != 0) {
            return 1;
        }
block_14:
        if (func_00BD9E70() != 0) {
            temp_a0_2 = M2C_FIELD(arg0, void **, 4);
            temp_v1_2 = M2C_FIELD(temp_a0_2, u16 *, 0x30);
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 0xC9:                              /* switch 2 */
                if (!(M2C_FIELD(temp_a0_2, f32 *, 0x38) < 42.0f)) {
                    return 1;
                }
                goto block_28;
            case 0xEE:                              /* switch 2 */
                if (!(M2C_FIELD(temp_a0_2, f32 *, 0x38) < 40.0f)) {
                    return 1;
                }
                goto block_28;
            }
        } else {
block_28:
            return 0;
        }
        break;
    case 0xF0:                                      /* switch 1 */
        if (func_00207D80(temp_a0, 0x34) != 0) {
            return 1;
        }
        goto block_14;
    }
}
