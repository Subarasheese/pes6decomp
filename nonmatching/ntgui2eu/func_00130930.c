/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B59DC[];
extern char D_005B59E0[];

void func_00130930(M2C_UNK arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) ((*(s32 *)D_005B59DC) * 0x10);
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) ((*(s32 *)D_005B59E0) * 0x10);
}
