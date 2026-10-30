/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018D690(s32);                         /* extern */
s32 func_0018D780();                                /* extern */
M2C_UNK func_00193008(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00194160(void *, s16, s16, s16);       /* extern */
extern char D_005C8D60[];
extern char D_005C8D64[];
extern char D_005C8D68[];
extern char D_011F6D40[];

void func_0018D7C8(void) {
    s32 temp_v0;
    void *temp_v0_2;
    void *var_a0;

    (*(s32 *)D_005C8D60) += 1;
    temp_v0 = func_0018D780() == 0;
    M2C_FIELD(((void *)D_005C8D64), s32 *, 0) = temp_v0;
    func_0018D690(temp_v0);
    func_00193008(((void *)D_011F6D40), (*(s32 *)D_005C8D60));
    if (M2C_FIELD(((void *)D_005C8D68), s32 *, 0) == 1) {
        M2C_FIELD(((void *)D_005C8D68), s32 *, 0x28) = (s32) M2C_FIELD(((void *)D_005C8D64), s32 *, 0);
        if ((*(s32 *)D_005C8D60) & 1) {
            var_a0 = ((void *)D_011F6D40) + 0x150;
        } else {
            var_a0 = ((void *)D_011F6D40) + 0x60;
        }
        temp_v0_2 = ((void *)D_005C8D68) - 0x7298;
        func_00194160(var_a0, M2C_FIELD(temp_v0_2, s16 *, 0x20), M2C_FIELD(temp_v0_2, s16 *, 0x24), M2C_FIELD(((void *)D_005C8D64), s16 *, -0x729C));
        return;
    }
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x28) = 0;
}
