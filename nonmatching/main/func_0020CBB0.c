/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0020C6E0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_003A8EB0[];
extern char D_00537AE0[];

void func_0020CBB0(void) {
    s32 *temp_s0;

    temp_s0 = ((void *)D_00537AE0) + (0 * 4);
    if (*temp_s0 == 0) {
        *temp_s0 = func_0020C6E0(((void *)D_003A8EB0), 0xA, 0x21, 0, 0, 0, 0);
    }
}
