/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00193068(M2C_UNK);                         /* extern */
extern char D_005C8D60[];
extern char D_005C8D64[];
extern char D_005C8D90[];

void func_00190048(void) {
    s32 temp_v0;

    (*(s32 *)D_005C8D60) += 1;
    temp_v0 = func_00193068(0) == 0;
    (*(s32 *)D_005C8D64) = temp_v0;
    (*(s32 *)D_005C8D90) = temp_v0;
}
