/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
extern char D_00385094[];
extern char D_0050E440[];
extern char D_0050E580[];
extern char D_0050E780[];

void func_0016A578(void) {
    M2C_UNK *var_v0;
    s32 *var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *var_v0_2;

    var_v1 = ((void *)D_00385094);
    if ((*(s32 *)D_00385094) == 0) {
        var_v1_2 = 0x27;
        var_v0 = ((void *)D_0050E440);
        do {
            var_v1_2 -= 1;
            M2C_FIELD(var_v0, s32 *, 0) = 0;
            M2C_FIELD(var_v0, s32 *, 4) = 0;
            var_v0 += 8;
        } while (var_v1_2 >= 0);
        var_v1_3 = 0x1F;
        var_v0_2 = ((void *)D_0050E580) + 0x1F4;
        do {
            var_v1_3 -= 1;
            *var_v0_2 = 0;
            var_v0_2 -= 0x10;
        } while (var_v1_3 >= 0);
        func_001C48E8(((void *)D_0050E780), 0, 9);
        (*(s8 *)D_0050E780) = 0;
        var_v1 = ((void *)D_00385094) + 0x5094;
    }
    *var_v1 += 1;
}
