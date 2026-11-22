/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00BE8240(s32);
extern s32 func_00BE8740(s32, s32, s32, s32);

void func_00BE8428(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00BE8240(func_00BE8740(arg0, arg1, arg2, arg3));
}
