/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0087EB40(void);
s32 func_0087E730();                                /* extern */
s32 func_0087E850();                                /* extern */
extern char D_003AE990[];

s32 func_0087EE50(void) {
    switch ((*(s16 *)D_003AE990)) {                           /* irregular */
    case 0:
        if (func_0087EB40() != 0) {
            (*(s16 *)D_003AE990) += 1;
        }
block_10:
    default:
        return 0;
    case 1:
        if (func_0087E850() != 0) {
            (*(s16 *)D_003AE990) += 1;
        }
        goto block_10;
    case 2:
        if (func_0087E730() != 0) {
            return 1;
        }
        goto block_10;
    }
}
