/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0013E2A0(int);
extern void func_0013E2D0(int);
extern char D_0092F0D0[];
extern char D_0092F0D8[];
extern char D_0092F0D9[];

void func_0090A050(void) {
    func_0013E2A0((s32) (*(u8 *)D_0092F0D8));
    func_0013E2D0((s32) (*(u8 *)D_0092F0D9));
    (*(s32 *)D_0092F0D0) &= ~0x2000;
}
