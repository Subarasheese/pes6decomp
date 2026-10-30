/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B4D80(M2C_UNK, M2C_UNK);                /* extern */
extern char D_00CE4EA0[];

void func_00BC66B0(void) {
    if ((*(s32 *)D_00CE4EA0) == 0) {
        (*(s32 *)D_00CE4EA0) = func_001B4D80(0x467A0000, 0x42C80000);
    }
}
