/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207780(u16, s32, M2C_UNK, M2C_UNK *); /* extern */
extern char D_00CB7520[];
extern char D_00CBA8B0[];
extern char D_00CE5350[];
extern char D_00CE5354[];

void func_00BCA970(M2C_UNK arg0, s32 arg1) {
    f32 temp_f1;
    s32 var_a2;
    void *temp_a1;

    temp_a1 = ((void *)D_00CB7520) + (arg1 * 0xC);
    if ((*(u8 *)D_00CE5354) == 0) {
        M2C_FIELD(((void *)D_00CE5350), s8 *, 5) = 0;
        M2C_FIELD(((void *)D_00CBA8B0), s8 *, 0) = 0xFF;
        temp_f1 = M2C_FIELD(temp_a1, f32 *, 4);
        M2C_FIELD(((void *)D_00CBA8B0), s8 *, 1) = 0;
        M2C_FIELD(((void *)D_00CBA8B0), s32 *, 4) = 0;
        if (!(temp_f1 >= 2.1474836e9f)) {
            var_a2 = (s32) temp_f1;
        } else {
            var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        }
        func_00207780(M2C_FIELD(temp_a1, u16 *, 0), var_a2 & 0xFFFF, 0x10, ((void *)D_00CBA8B0));
    }
}
