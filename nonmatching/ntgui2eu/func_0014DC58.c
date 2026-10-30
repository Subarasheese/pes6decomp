/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, M2C_UNK);                /* extern */
extern char D_011E0A20[];
extern char D_011E0A24[];
extern char D_011E0A34[];
extern char D_011E0A38[];
extern char D_011E0A50[];

void func_0014DC58(void) {
    M2C_UNK *var_s1;
    s32 *var_s0;

    if ((M2C_FIELD(((void *)D_011E0A50), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011E0A50), s32 *, 0) < 7)) {
        var_s1 = ((void *)D_011E0A34);
        var_s0 = ((void *)D_011E0A20);
        (*(s32 *)D_011E0A20) = func_00129600(func_00135080(0xD7), ((void *)D_011E0A24), 1, ((void *)D_011E0A34), 0);
        (*(s32 *)D_011E0A38) = 0;
    } else {
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s1, s32 *, 0xA34), 0);
    func_00136490(M2C_FIELD(var_s0, s32 *, 0xA20), M2C_FIELD(((void *)D_011E0A50), s32 *, 0xA50), 7);
}
