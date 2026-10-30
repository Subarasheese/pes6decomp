/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001FC840(void);
extern s32 func_0017F900(void);
extern void func_001FC780(void);
s32 func_008F7360();                                /* extern */
extern s32 D_003E9D5C;
extern char D_00510FD0[];
extern char D_005E3CA8[];

s32 func_002CBE20(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003E9D5C) {                           /* irregular */
    default:
        if ((*(s32 *)D_00510FD0) == 1) {
            (*(s32 *)D_005E3CA8) = 1;
        }
        D_003E9D5C += 1;
        /* fallthrough */
    case 1:
        func_001FC840();
        D_003E9D5C += 1;
        break;
    case 2:
        if (func_0017F900() == 1) {
            D_003E9D5C += 1;
        }
        break;
    case 3:
        if (func_008F7360() == 1) {
            func_001FC780();
            D_003E9D5C = 0;
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
