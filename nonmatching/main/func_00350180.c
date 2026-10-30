/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030F1A0(void);
extern int func_0030E780(void);
extern int func_003387D0(void *, int);
extern int func_00333600(int);
extern s32 func_00338750(void *, s32);
extern s32 func_0030EA70(void);
extern s8 D_003E9F80;
extern M2C_UNK func_00350A70;

s32 func_00350180(void *arg0) {
    s32 temp_hi;
    s32 temp_s1;

    temp_hi = func_0030EA70() % 45;
    if ((temp_hi != 0x2B) && (temp_hi != 0x22) && (temp_hi != 0x20) && (temp_hi != 0x13)) {
        if (func_0030E780() == 0) {
            temp_s1 = 1 & func_00333600(2);
            if (!(temp_s1 & func_0030F1A0())) {
                return 0;
            }
            goto block_7;
        }
        goto block_8;
    }
block_7:
    func_003387D0(arg0, (s32) &func_00350A70);
    func_00338750(arg0, 5);
    D_003E9F80 = 0;
block_8:
    return 0;
}
