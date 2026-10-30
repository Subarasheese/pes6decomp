/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
M2C_UNK func_001C48E8(u16 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0094C7B0();                                /* extern */
extern char D_00B8C760[];

s32 func_00B24B10(void) {
    s32 var_s2;
    s32 var_s3;
    u16 *var_s0;
    void *var_s1;

    var_s2 = 0;
    var_s1 = func_00228A80();
    if (var_s1 == NULL) {
        return 0;
    }
    func_001C48E8(((void *)D_00B8C760), 0, 0x2714);
    var_s3 = 0;
    var_s0 = ((void *)D_00B8C760);
    do {
        *var_s0 = M2C_FIELD(var_s1, u16 *, 0x32EAE);
        if (func_0094C7B0() == 0x12) {
            goto block_7;
        }
        if (*var_s0 != 0) {
block_7:
            var_s2 += 1;
        }
        var_s3 += 1;
        var_s1 += 2;
        var_s0 += 2;
    } while (var_s3 < 0x20);
    return var_s2;
}
