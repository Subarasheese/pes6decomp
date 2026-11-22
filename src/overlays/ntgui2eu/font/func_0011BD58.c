/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_0011E180(void *);

void func_0011BD58(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)((s8 *)(arg0) + 0x350) = arg2;
    *(s32 *)((s8 *)(arg0) + 0x358) = arg3;
    *(s32 *)((s8 *)(arg0) + 0x354) = arg1;
    func_0011E180(arg0);
}
