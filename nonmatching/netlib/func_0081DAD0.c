/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001E4E00(void);
extern f32 func_001E4E30(void);
s32 func_0081DAD0(void *arg0, void *arg1) {
    s32 temp_v1;

    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0);
            switch (temp_v1) {                      /* irregular */
            case 2:
                return 0;
            case 1:
                return 0;
            case 0:
                if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
                    M2C_FIELD(arg1, f32 *, 0) = func_001E4E30();
                    M2C_FIELD(arg1, f32 *, 4) = func_001E4E00();
                    return 1;
                }
                return 0;
            default:
                return 0;
            }
        } else {
            goto block_4;
        }
    } else {
block_4:
        return 0;
    }
}
