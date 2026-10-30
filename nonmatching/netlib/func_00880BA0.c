/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00814FC0(M2C_UNK *);                       /* extern */
extern char D_0088A7B0[];
extern char D_008B2460[];

s32 func_00880BA0(void) {
    if ((*(s32 *)D_008B2460) != 0) {
        if (func_00814FC0(((void *)D_0088A7B0)) == 0) {
            return 0;
        }
        (*(s32 *)D_008B2460) = 0;
        goto block_4;
    }
block_4:
    return 1;
}
