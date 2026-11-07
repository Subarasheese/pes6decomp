/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C4730(char *, s32, s32);
extern char D_00CCAD60[];

s32 func_00C14F70(s32 arg0, s32 arg1) {
    char *d = D_00CCAD60;
    if (arg0 != 0) {
        func_001C4730(d, arg0, arg1);
    }
    return arg0 + arg1;
}
