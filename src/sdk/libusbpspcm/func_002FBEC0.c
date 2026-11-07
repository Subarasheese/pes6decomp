/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_003DCBD8[];
extern char D_005EAAB0[];
extern s32 func_002FB020(void);
extern s32 func_0010CF90(char *, s32, s32 *, s32, char *, s32);
extern void func_002FB010(s32);
extern void func_002FAFD0(s32);

s32 func_002FBEC0(void) {
    s32 buf[2];
    s32 r;
    s32 h = func_002FB020();
    if (h < 0) {
        return -1;
    }
    buf[0] = h;
    r = func_0010CF90(D_003DCBD8, 0x55504302, buf, 8, D_005EAAB0, 0x10);
    func_002FB010(r);
    if (r == 0) {
        func_002FAFD0(1);
    }
    return r;
}
