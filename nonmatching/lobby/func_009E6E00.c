/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009E84E0(void *);
M2C_UNK func_0099C730(s32);                         /* extern */
extern void *D_00A7DF30;
extern char D_00A7DF34[];

s32 func_009E6E00(void) {
    if (D_00A7DF30 == NULL) {

    } else {
        func_009E84E0(D_00A7DF30);
        D_00A7DF30 = NULL;
        func_0099C730((*(s32 *)D_00A7DF34));
    }
    return 1;
}
