/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0013E2A0(int);
extern void func_0013E2D0(int);
extern int func_0013E280(void);
extern int func_0013E2B0(void);
extern char D_0092F0D0[];
extern char D_0092F0D8[];
extern char D_0092F0D9[];

void func_0090A0A0(void) {
    (*(s8 *)D_0092F0D8) = func_0013E280();
    (*(s8 *)D_0092F0D9) = func_0013E2B0();
    func_0013E2A0(2);
    func_0013E2D0(1);
    (*(s32 *)D_0092F0D0) &= ~0x2000;
}
