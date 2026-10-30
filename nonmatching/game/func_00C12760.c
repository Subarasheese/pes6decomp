/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK *D_003EA7BC;
extern char D_00CBDED0[];

void func_00C12760(void) {
    M2C_UNK *var_a1;
    s32 var_a3;
    s8 var_a2;

    D_003EA7BC = ((void *)D_00CBDED0);
    func_001C48E8(((void *)D_00CBDED0), 0, 0x1BC4);
    var_a3 = 0;
    var_a1 = ((void *)D_00CBDED0);
    do {
        var_a2 = 0;
loop_2:
        if (var_a2 < 0xB) {
            M2C_FIELD((var_a1 + var_a2), s8 *, 0x98) = var_a2;
        } else {
            M2C_FIELD((var_a1 + var_a2), s8 *, 0x98) = 0xFF;
        }
        var_a2 += 1;
        if (var_a2 < 0x12) {
            goto loop_2;
        }
        var_a3 += 1;
        var_a1 += 0x12;
    } while (var_a3 < 2);
}
