/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002FB090(void);
extern void func_002FAFF0(void);
extern char D_005EAAC4[];
extern char D_005EAAE4[];

s32 func_002FBAB0(void) {
    if ((*(s32 *)D_005EAAC4) != 0) {
        return 0;
    }
    if (func_002FB090() != 1) {
        return 0;
    }
    (*(s32 *)D_005EAAC4) = 1;
    (*(s32 *)D_005EAAE4) = 0;
    func_002FAFF0();
    return 1;
}
