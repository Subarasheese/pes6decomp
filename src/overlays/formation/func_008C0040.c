/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern void func_008BFE20(s32, s32);

void func_008C0040(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_008BFE20(arg0, arg1 + 0x73E);
    }
}
