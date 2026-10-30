/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00335370(void);
extern int func_00333440(int, int, int);
extern void func_00338930(int);
extern s32 func_003389D0(s32, s32);
extern s8 D_003E9FA0;

s32 func_00354940(s32 arg0) {
    s32 temp_s0;

    temp_s0 = (func_003389D0(arg0, 0) == 0) & 0xFF;
    M2C_FIELD(func_00335370(), s32 *, 0x1008) = temp_s0;
    if (func_00333440(0x37, 0, 1) != 0) {
        D_003E9FA0 = 1;
    }
    func_00338930(arg0);
    return 1;
}
