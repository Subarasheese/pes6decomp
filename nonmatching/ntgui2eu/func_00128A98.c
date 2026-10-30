/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001282A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, void *, f32, void *); /* extern */
extern char D_005B3760[];
extern char D_005B3970[];

void func_00128A98(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = ((void *)D_005B3760) + 0x1A0;
    func_001282A8(0, 1, 2, 5, arg2, temp_v0, (*(f32 *)D_005B3970), temp_v0);
}
