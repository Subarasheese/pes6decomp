/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0023A030(void);
extern void func_00338930(int);
extern s32 func_00332FA0(void);
extern s8 D_003E9F50;

s32 func_00370CC0(s32 arg0) {
    if (func_00332FA0() == 0) {
        D_003E9F50 = 0;
        func_0023A030();
        func_00338930(arg0);
        return 1;
    }
    return 0;
}
