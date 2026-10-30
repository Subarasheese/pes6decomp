/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00197F98(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00197FE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00198030(s32, s32);                    /* extern */
extern s32 D_006025C4;
extern char D_011AEB38[];

void func_001044F0(void) {
    M2C_UNK *var_v0;
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s32 temp_a0;

    var_v0 = ((void *)D_011AEB38);
    var_a1 = 0x1E;
    var_a2 = 3;
    if (M2C_FIELD(((void *)D_011AEB38), s32 *, 8) != 1) {
        if (M2C_FIELD(((void *)D_011AEB38), s32 *, 8) < 2) {
            var_v0 = ((void *)D_011AEB38);
            if (M2C_FIELD(((void *)D_011AEB38), s32 *, 8) != 0) {

            } else {
                var_a1 = 0x14;
                goto block_9;
            }
        } else {
            var_v0 = ((void *)D_011AEB38) - 0x14C8;
            if (M2C_FIELD(((void *)D_011AEB38), s32 *, 8) != 2) {

            } else {
                var_a1 = 0x2D;
block_9:
                var_v0 = ((void *)D_011AEB38) - 0x14C8;
            }
        }
    }
    temp_a0 = M2C_FIELD(var_v0, s32 *, 0xC);
    switch (temp_a0) {                              /* irregular */
    case 0:
        var_a2 = 2;
        break;
    case 2:
        var_a2 = 5;
        break;
    case 1:
        var_a2 = 3;
        break;
    }
    func_00197F98(D_006025C4, var_a1, var_a2);
    func_00197FE0(D_006025C4, 1);
    func_00198030(D_006025C4, M2C_FIELD((((void *)D_011AEB38) - 0x14C8), s32 *, 4));
}
