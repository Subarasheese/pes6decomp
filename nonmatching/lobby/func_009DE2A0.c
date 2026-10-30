/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_002134A0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_009DE830(void *);                      /* extern */
extern char D_00A03148[];
extern void *D_00A7DEC8;

s32 func_009DE2A0(M2C_UNK *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK var_a2;

    var_a1 = arg0;
    if (D_00A7DEC8 == NULL) {
        return 0;
    }
    if (var_a1 == NULL) {
        var_a1 = ((void *)D_00A03148);
    }
    func_001C8590(D_00A7DEC8 + 4, var_a1, 0x200);
    func_009DE830(D_00A7DEC8 + 4);
    if (M2C_FIELD(D_00A7DEC8, s8 *, 4) == 0) {
        var_a2 = 1;
    } else {
        var_a2 = 0;
    }
    func_002134A0(M2C_FIELD(D_00A7DEC8, s32 *, 0), 1, var_a2);
    return 1;
}
