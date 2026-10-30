/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD80(s32);
extern void func_0012E0A0(void);
extern char D_003FB778[];

void func_0012ECF0(void) {
    func_0012E0A0();
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012AD80((*(s32 *)D_003FB778));
        (*(s32 *)D_003FB778) = -1;
    }
}
