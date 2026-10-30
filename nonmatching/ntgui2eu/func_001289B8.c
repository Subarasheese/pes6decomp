/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001282A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, f32, void *); /* extern */
extern char D_005B3760[];
extern char D_005B3970[];
extern char D_005F95F0[];

void func_001289B8(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    func_001282A8(1, 1, 0, 0x14, arg2, ((void *)D_005F95F0), (*(f32 *)D_005B3970), ((void *)D_005B3760) + 0x50);
}
