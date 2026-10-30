/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00338930(void *);                      /* extern */
s32 func_00BD9AA0();                                /* extern */
s32 func_00C7EF80(M2C_UNK);                         /* extern */
extern s8 D_003E9FA0;
extern s32 D_003E9FA8;

s32 func_00352430(void *arg0) {
    if (func_00BD9AA0() == 0) {
        if (D_003E9FA8 == 1) {
            if (func_00C7EF80(0) != 0) {
                return 0;
            }
            if (func_00C7EF80(1) != 0) {
                return 0;
            }
            goto block_10;
        }
block_10:
        D_003E9FA0 = 0;
        D_003E9FA8 = 3;
        *M2C_FIELD(arg0, s32 **, 0x48) = 0;
        func_00338930(arg0);
        return 1;
    }
    return 0;
}
