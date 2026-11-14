/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C4730(s32, char *, s32);
extern char D_00CCAD60[];

s32 func_00C14FC0(s32 arg0) {
    char *d = D_00CCAD60;
    if (arg0 != 0) {
        func_001C4730(arg0, d, 4);
    }
    return arg0 + 4;
}
