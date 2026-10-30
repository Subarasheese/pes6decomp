/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177A80(void *, int);
extern char D_003CC428[];
extern char D_003CC458[];
extern char D_003CC598[];
extern char D_003CC5A8[];

s32 func_001787E0(void *arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a1;
    s32 var_v0;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003CC598);
        var_a1 = ((void *)D_003CC428);
        goto block_6;
    }
    if (M2C_FIELD(arg0, s8 *, 4) != 0) {
        var_a0_2 = M2C_FIELD(arg0, M2C_UNK **, 0x14);
        var_v0 = 0;
        if (var_a0_2 != NULL) {
            do {
                var_a0_2 = *var_a0_2;
                var_v0 += 1;
            } while (var_a0_2 != NULL);
        }
        return var_v0;
    }
    var_a0 = ((void *)D_003CC5A8);
    var_a1 = ((void *)D_003CC458);
block_6:
    func_00177A80(var_a0, (s32) var_a1);
    return 0;
}
