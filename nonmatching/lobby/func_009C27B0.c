/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(void *, s32);                 /* extern */
extern s32 *D_00A7DD50;

s32 func_009C27B0(s32 arg0, s32 arg1) {
    if (D_00A7DD50 != NULL) {
        if (*D_00A7DD50 != 1) {
            return 0;
        }
        if (arg0 == 0) {
            return 0;
        }
        if (arg1 >= 0) {
            func_001C8590(D_00A7DD50 + 0x109, arg1);
            return 1;
        }
        return 0;
    }
    return 0;
}
