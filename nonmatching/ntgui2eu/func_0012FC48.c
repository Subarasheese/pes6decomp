/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0012FC40(void);
extern void func_0012FC38(void);
extern char D_011D4D58[];

void func_0012FC48(void) {
    if (((*(s32 *)D_011D4D58) < 2) && ((*(s32 *)D_011D4D58) >= 0)) {
        func_0012FC38();
        return;
    }
    func_0012FC40();
}
