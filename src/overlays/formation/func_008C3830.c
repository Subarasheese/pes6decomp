/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002DBC20(s32, s32, s32, s32);

void func_008C3830(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002DBC20(*(s32 *)((s8 *)(arg0) + 0x50), (arg1 & 0xFF), arg2, arg3);
}
