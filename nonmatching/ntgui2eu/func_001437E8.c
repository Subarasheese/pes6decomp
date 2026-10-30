/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
extern char D_011DF838[];
extern char D_011DF840[];
extern char D_011DF860[];
extern char D_011DF864[];

void func_001437E8(void) {
    (*(s32 *)D_011DF838) = func_00129600(func_00135080(0x109), ((void *)D_011DF840), 3, ((void *)D_011DF860), ((void *)D_011DF864));
}
