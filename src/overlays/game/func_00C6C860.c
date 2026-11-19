/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void SD_call(s32 a0, s32 a1, s32 a2);

void func_00C6C860(s32 arg0, s32 arg1, s32 arg2) {
    SD_call(0, arg1, arg2);
}
