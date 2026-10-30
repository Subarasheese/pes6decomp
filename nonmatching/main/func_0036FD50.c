/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00333320(s32);
extern int func_0023A380(void);
extern s32 func_00332FA0(void);
extern int func_003387D0(void *, int);
extern u8 D_003E9F50;
extern M2C_UNK func_00370EE0;

s32 func_0036FD50(void *arg0) {
    if (func_0023A380() != 0) {
        if ((D_003E9F50 != 0) && (func_00332FA0() != 0)) {
            func_00333320(1);
        }
        func_003387D0(arg0, (s32) &func_00370EE0);
        return 1;
    }
    return 0;
}
