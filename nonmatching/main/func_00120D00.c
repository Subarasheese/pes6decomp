/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK, void *); /* extern */
extern s32 D_003E9780;
extern char D_003FAE50[];
extern void *D_003FAE54;

void func_00120D00(s32 arg0) {
    void *var_a3;

    if (arg0 != 0) {
        var_a3 = D_003FAE54;
loop_2:
        if (M2C_FIELD(var_a3, s32 *, 8) != arg0) {
            var_a3 = M2C_FIELD(var_a3, void **, 4);
            if (var_a3 == ((void *)D_003FAE50)) {

            } else {
                goto loop_2;
            }
        }
        if ((var_a3 != ((void *)D_003FAE50)) && (var_a3 != ((void *)D_003FAE50))) {
            M2C_FIELD(M2C_FIELD(var_a3, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_a3, void ***, 4);
            *M2C_FIELD(var_a3, void ***, 4) = M2C_FIELD(var_a3, void **, 0);
            func_001C48E8(var_a3, 0, 0x10, var_a3);
            D_003E9780 -= 1;
        }
    }
}
