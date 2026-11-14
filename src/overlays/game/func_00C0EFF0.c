/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C4730(s32, char *, s32);
extern char D_00CBD8C0[];

s32 func_00C0EFF0(s32 arg0) {
    func_001C4730(arg0, D_00CBD8C0, 0x14);
    return arg0 + 0x14;
}
