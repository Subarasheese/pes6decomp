/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002DED70(void *);                      /* extern */
extern void *D_003E9DE8;

s32 func_002DEBC0(void) {
    void *temp_s0;

    if (D_003E9DE8 != NULL) {
loop_1:
        temp_s0 = D_003E9DE8;
        if (M2C_FIELD(temp_s0, s32 (**)(), 0x10) != NULL) {
            M2C_FIELD(temp_s0, s32 *, 8) = 2;
            if (M2C_FIELD(temp_s0, s32 (**)(), 0x10)() == 0) {
                return 2;
            }
        }
        M2C_FIELD(temp_s0, s32 *, 8) = 3;
        func_002DED70(temp_s0);
        if (D_003E9DE8 == NULL) {
            goto block_5;
        }
        goto loop_1;
    }
block_5:
    return 3;
}
