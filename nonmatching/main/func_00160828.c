/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0015FEA0(void);
M2C_UNK func_0015F998(s32);                         /* extern */
s32 func_0015FA00(s32);                             /* extern */
extern char D_0037B9DC[];
extern char D_0037B9E0[];

void func_00160828(void) {
    if (func_0015FA00((*(s32 *)D_0037B9DC)) == (*(s32 *)D_0037B9DC)) {
        func_0015F998((*(s32 *)D_0037B9DC));
    }
    if ((func_0015FEA0() == 1) && (func_0015FA00((*(s32 *)D_0037B9E0)) == (*(s32 *)D_0037B9E0))) {
        func_0015F998((*(s32 *)D_0037B9E0));
    }
}
