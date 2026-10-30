/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B77F0(s32);
extern void func_001B7B80(s32);
extern void func_001B78A0(void);
M2C_UNK func_001B7D40(s32, s32);                    /* extern */
s32 func_00D0C970();                                /* extern */
extern char D_0058D7AA[];

void func_0090FD20(s32 arg0, s32 arg1) {
    if (((*(s8 *)D_0058D7AA) == 0) || (func_00D0C970() == 0)) {
        if (arg1 != 0) {
            func_001B7D40(arg0, arg1);
            func_001B78A0();
            func_001B77F0(3);
        } else {
            func_001B7B80(arg0);
        }
    }
}
