/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
extern s32 func_00360B00(void);
extern void func_00305E50(int);
extern char D_00510FD0[];
extern M2C_UNK func_002FDEB0;

s32 func_002FDFA0(void *arg0) {
    if (((*(s32 *)D_00510FD0) == 0xC) && (func_00360B00() == 1)) {
        func_00305E60(arg0, (s32) &func_002FDEB0);
    }
    if ((*(s32 *)D_00510FD0) == 9) {
        func_00305E60(arg0, (s32) &func_002FDEB0);
    }
    if (((*(s32 *)D_00510FD0) != 0xC) && ((*(s32 *)D_00510FD0) != 9)) {
        func_00305E50((s32) arg0);
    }
    return 1;
}
