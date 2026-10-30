/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(void *, M2C_UNK *, s32);      /* extern */
extern void *D_003EA94C;
extern char D_009C40D0[];

void func_00970DE0(s32 arg0) {
    void *temp_s0;

    temp_s0 = D_003EA94C;
    if (temp_s0 != NULL) {
        sprintf(temp_s0 + 4, ((void *)D_009C40D0), arg0);
        M2C_FIELD(temp_s0, s8 *, 0x404) = 1;
    }
}
