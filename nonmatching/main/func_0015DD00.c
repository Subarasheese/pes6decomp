/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00163470(int);
extern void func_0015B478(void *);
extern int func_00164170(int);
extern int func_001646A0(int);
extern char D_003C82F0[];

s32 func_0015DD00(void *arg0) {
    s32 var_v0;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C82F0));
        return -3;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x10) <= 0x7FFFF7FF) || (func_001646A0(M2C_FIELD(arg0, s32 *, 4)), var_v0 = -5, (func_00163470(M2C_FIELD(arg0, s32 *, 4)) != 4))) {
        var_v0 = func_00164170(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x10) = var_v0;
    }
    return var_v0;
}
