/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
s32 func_0015D228(s8);                              /* extern */
extern char D_003C8060[];
extern char D_003C8088[];
extern char D_003C80B8[];

s32 func_0015D380(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_a0;
    s32 var_v0;
    s8 temp_a3;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003C8060);
        goto block_9;
    }
    if (arg1 < 0) {
        var_a0 = ((void *)D_003C8088);
        goto block_9;
    }
    if (arg2 != 0) {
        temp_a3 = M2C_FIELD(arg0, s8 *, 1);
        var_v0 = 0;
        if (temp_a3 != 2) {
            var_v0 = func_0015D228(temp_a3);
            M2C_FIELD(arg0, s8 *, 2) = 1;
        }
        return var_v0;
    }
    var_a0 = ((void *)D_003C80B8);
block_9:
    func_0015B478(var_a0);
    return -3;
}
