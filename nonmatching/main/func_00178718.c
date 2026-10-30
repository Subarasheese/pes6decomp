/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177A80(void *, int);
extern char D_003CC428[];
extern char D_003CC458[];
extern char D_003CC578[];
extern char D_003CC588[];

s32 func_00178718(void *arg0, s32 arg1) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    M2C_UNK *var_v0;
    s32 var_v1;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003CC578);
        var_a1 = ((void *)D_003CC428);
        goto block_6;
    }
    if (M2C_FIELD(arg0, s8 *, 4) != 0) {
        var_v0 = M2C_FIELD(((arg1 * 4) + arg0), M2C_UNK **, 0x18);
        var_v1 = 0;
        if (var_v0 != NULL) {
            do {
                var_v0 = *var_v0;
                var_v1 += 1;
            } while (var_v0 != NULL);
        }
        return var_v1;
    }
    var_a0 = ((void *)D_003CC588);
    var_a1 = ((void *)D_003CC458);
block_6:
    func_00177A80(var_a0, (s32) var_a1);
    return 0;
}
