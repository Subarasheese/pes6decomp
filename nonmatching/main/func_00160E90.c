/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015EF80(int);
extern s32 func_00160F60(s32);
M2C_UNK func_0015FED8(s32);                         /* extern */
extern char D_0038326C[];

s32 func_00160E90(s32 arg0, s32 arg1) {
    s32 var_s1;

    var_s1 = 1;
    func_0015EF80(func_00160F60(arg0));
    (*(s32 *)D_0038326C) = arg0;
    switch (arg0) {                                 /* irregular */
    case 1:
        break;
    default:
        var_s1 = 0;
        break;
    case 2:
        /* fallthrough */
    case 0:
        func_0015FED8(arg1);
        break;
    }
    return var_s1;
}
