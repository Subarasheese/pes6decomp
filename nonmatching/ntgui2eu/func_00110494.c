/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00110AA4(M2C_UNK *);                       /* extern */
extern char D_0044CA90[];

s32 func_00110494(void) {
    if (func_00110AA4(((void *)D_0044CA90)) != 0) {
        return 0;
    }
    return func_00110AA4(((void *)D_0044CA90) + 0x824) == 0;
}
