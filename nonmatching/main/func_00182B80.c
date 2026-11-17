/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00147F00(s32 a, s32 b, void (*c)(void), void (*d)(void), s32 e, s32 f);
extern void D_00397080(void);
extern void func_00182B40(void);
extern char D_0051FF68[];

void func_00182B80(void) {
    if ((*(s32 *)D_0051FF68) != 0) {
        func_00147F00(1, 0xC, D_00397080, func_00182B40, 0, 0);
    }
}
