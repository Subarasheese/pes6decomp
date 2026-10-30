/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E120(int);
extern int func_002646D0(int);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00C82290();                            /* extern */
M2C_UNK func_00C8AA10(M2C_UNK);                     /* extern */
extern char D_00591CB4[];
extern char D_00591CB8[];

s32 func_00CF81B0(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_s0 = 1;
        break;
    case 0:
        func_0017E120(0);
        func_00C8AA10(0);
        func_00C82290();
        (*(s32 *)D_00591CB8) = 0;
        (*(s32 *)D_00591CB4) = 0;
        func_002646E0(arg0);
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
