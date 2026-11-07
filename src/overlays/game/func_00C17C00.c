/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C4730(char *, s32, s32);
extern char D_00CCAE40[];

s32 func_00C17C00(s32 arg0, s32 arg1) {
    char *d = D_00CCAE40;
    s32 v = arg0;
    if (v != 0) {
        func_001C4730(d, v, arg1);
        v += arg1;
    }
    return v;
}
