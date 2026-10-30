/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0024FF10(void);
M2C_UNK func_0024EF60(s32, s32);                    /* extern */
M2C_UNK func_0024F030(s32, s32, s32);               /* extern */
M2C_UNK func_002503E0(s32);                         /* extern */
M2C_UNK func_00250830();                            /* extern */
s32 func_00250E70(s64, M2C_UNK);                    /* extern */
M2C_UNK func_002511D0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 D_003E9B4C;
extern char D_00583F80[];

void func_00250740(void) {
    s64 var_a0;
    void *temp_v0;

    func_00250830();
    func_0024FF10();
    D_003E9B4C = 0;
    var_a0 = 0;
    do {
        if (func_00250E70((s64) (var_a0 << 0x20) >> 0x20, 0xE) != 0) {
            func_002503E0(D_003E9B4C);
            func_0024EF60(D_003E9B4C, func_00250E70((s64) D_003E9B4C, 0xD));
            if (func_00250E70((s64) D_003E9B4C, 0xF) != 0) {
                temp_v0 = ((void *)D_00583F80) + (D_003E9B4C * 0x7C);
                func_0024F030(D_003E9B4C, M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4));
                func_002511D0(D_003E9B4C, 0xF, 0);
            }
            func_002511D0(D_003E9B4C, 0xE, 0);
        }
        var_a0 = D_003E9B4C + 1;
        D_003E9B4C = (s32) var_a0;
    } while (var_a0 < 8);
}
