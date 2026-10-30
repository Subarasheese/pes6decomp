/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009E84E0(void *);
M2C_UNK func_0099C730(s32);                         /* extern */
M2C_UNK func_009E84C0(void *);                      /* extern */
s32 func_009E8540(void *);                          /* extern */
extern void *D_00A7DF30;
extern char D_00A7DF34[];

s32 func_009E6D70(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 1;
    if (D_00A7DF30 != NULL) {
        func_009E84C0(D_00A7DF30);
        if (D_00A7DF30 == NULL) {
            var_v0 = 1;
        } else {
            var_v0 = func_009E8540(D_00A7DF30);
        }
        var_s0 = var_v0;
        if ((var_v0 == 1) && (D_00A7DF30 != NULL)) {
            func_009E84E0(D_00A7DF30);
            D_00A7DF30 = NULL;
            func_0099C730((*(s32 *)D_00A7DF34));
        }
    }
    return var_s0;
}
