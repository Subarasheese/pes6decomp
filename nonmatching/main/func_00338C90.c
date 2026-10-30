/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F1CC0[];
extern void *D_005F1D68;

s32 func_00338C90(void) {
    void *temp_a0;
    void *var_a3;

    var_a3 = D_005F1D68;
    if (M2C_FIELD(var_a3, s32 *, 8) != 0x21) {
        do {
            temp_a0 = M2C_FIELD(var_a3, void **, 0x14);
            M2C_FIELD(M2C_FIELD(var_a3, void **, 0x10), void **, 0x14) = temp_a0;
            M2C_FIELD(M2C_FIELD(var_a3, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(var_a3, void **, 0x10);
            M2C_FIELD(var_a3, void **, 0x14) = (void *) M2C_FIELD(M2C_FIELD(((void *)D_005F1CC0), void **, 0x14C), void **, 0x14);
            M2C_FIELD(M2C_FIELD(((void *)D_005F1CC0), void **, 0x14C), void **, 0x14) = var_a3;
            M2C_FIELD(var_a3, void **, 0x10) = NULL;
            var_a3 = temp_a0;
        } while (M2C_FIELD(temp_a0, s32 *, 8) != 0x21);
    }
    M2C_FIELD(((void *)D_005F1CC0), s8 *, 0) = 0;
    return 1;
}
