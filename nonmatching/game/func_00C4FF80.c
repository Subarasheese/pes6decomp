/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA7F8;
extern char D_00CCB988[];

void func_00C4FF80(void) {
    D_003EA7F8 = 0;
    M2C_FIELD(((void *)D_00CCB988), s32 *, 8) = -1;
    M2C_FIELD(((void *)D_00CCB988), s32 *, 4) = -1;
    M2C_FIELD(((void *)D_00CCB988), s32 *, 0) = -1;
}
